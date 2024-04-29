// Sum without highest and lowest number
// DESCRIPTION:
// Task
// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

// The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

// Mind the input validation.

// Example
// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6
// Input validation
// If an empty value ( null, None, Nothing etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

#include <vector>
using namespace std;

int sum(vector<int> numbers)

{
    int sum = 0;
    if (numbers.size() < 2)
        return 0;
    int min = numbers[0];
    int max = numbers[0];
    for (int i : numbers)
    {
        if (i > max)
            max = i;
        else if (i < min)
            min = i;
        sum += i;
    }

    return sum - min - max;
}

// other solution
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    int sum = 0;

    for (int i = 1; i < numbers.size() - 1; i++)
        sum += numbers[i];

    return sum;
}

#include <iostream>
#include <vector>
int main()
{

    vector<int> numbers = {6, 2, 1, 8, 10};
    int result = sum(numbers);
    cout << result << endl;
}