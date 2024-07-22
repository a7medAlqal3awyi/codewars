//
// Given an array, return the difference between the count of even numbers and the count of odd numbers. 0 will be considered an even number.
//
// For example:
// solve([0,1,2,3]) = 0 because there are two even numbers and two odd numbers. Even - Odd = 2 - 2 = 0.
// Let's now add two letters to the last example:
//
// solve([0,1,2,3,'a','b']) = 0. Again, Even - Odd = 2 - 2 = 0. Ignore letters.
// The input will be an array of lowercase letters and numbers only.
//
// In some languages (Haskell, C++, and others), input will be an array of strings:
//
// solve ["0","1","2","3","a","b"] = 0

#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool isInt(string str){
    if (str.empty())return false;
    for (char c : str)
    {
        if (!std::isdigit(c) && c != '-' && c != '+') return false;
    }
    return true;
}

int solve(vector<string> v)
{
    int sumOdd = 0, sumEven = 0, res = 0;


    for (int i = 0; i < v.size(); i++)
    {
        if (isInt(v[i]))
        {
            if (stoi(v[i]) % 2 == 0)
            {
                sumEven++;
            }
            else
                sumOdd++;
        }
    }
    cout << "Final result = " << sumEven - sumOdd << endl;
    return sumEven - sumOdd;
}


// int main()
// {
//     solve({"5", "15", "16", "10", "6", "4", "16", "t", "13", "n", "14", "k", "n", "0", "q", "d", "7", "9"});
//
//     return 0;
// }

// other solutions
//
// using namespace std;
// int solve(vector<string>v){
//     int even, odd = even = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] >= "a" && v[i] <= "z")
//             continue;
//         ((stoi(v[i])) % 2 == 0) ? even++ : odd++;
//     }
//     return even - odd;
// }