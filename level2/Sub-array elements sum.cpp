// Sub-array elements sum
// Given an array (or list or vector) of arrays (or, guess what, lists or vectors) of integers, your goal is to return the sum of a specific set of numbers, starting with elements whose position is equal to the main array length and going down by one at each step.

// Say for example the parent array (etc, etc) has 3 sub-arrays inside: you should consider the third element of the first sub-array, the second of the second array and the first element in the third one: [[3, 2, 1, 0], [4, 6, 5, 3, 2], [9, 8, 7, 4]] would have you considering 1 for [3, 2, 1, 0], 6 for [4, 6, 5, 3, 2] and 9 for [9, 8, 7, 4], which sums up to 16.

// One small note is that not always each sub-array will have enough elements, in which case you should then use a default value (if provided) or 0 (if not provided), as shown in the test cases.

#include<vector>
#include <iostream>
using namespace std;
long elementsSum(const vector<vector<int>>& arr, int d = 0){

    int n = arrays.size();
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int position = n - i - 1; // Position starts at n for the first sub-array and decreases by 1 each step
        if (position < arrays[i].size()) {
            sum += arrays[i][position];
        } else {
            sum += defaultValue; // Use default value if the position is out of bounds
        }
    }

    return sum;

}