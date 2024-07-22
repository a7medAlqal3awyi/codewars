// Every possible sum of two digits
// DESCRIPTION:
// Given a long number, return all the possible sum of two digits of it.
//
// For example, 12345: all possible sum of two digits from that number are:
//
// [ 1 + 2, 1 + 3, 1 + 4, 1 + 5, 2 + 3, 2 + 4, 2 + 5, 3 + 4, 3 + 5, 4 + 5 ]
// Therefore the result must be:
//
// [ 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 ]
#include <iostream>
#include <vector>
using namespace std;
vector<int> digits(int n){
    string num = to_string(n);
    vector<int> digits;
    for (char c : num)
    {
        int digit = c - '0';

        digits.push_back(digit);
    }
    vector<int> res;
    int resItem=0;
    for (int i = 0; i < digits.size(); i++)
    {
        for (int t = i + 1; t < digits.size(); t++)
        {
            resItem=digits[i]+digits[t];
            res.push_back(resItem);
        }
    }
return  res;

}
int main()
{
    // const int n = 12345;
    // string num = to_string(n);
    // vector<int> digits;
    // for (char c : num)
    // {
    //     int digit = c - '0';
    //
    //     digits.push_back(digit);
    // }
    // vector<int> res;
    // int resItem=0;
    // for (int i = 0; i < digits.size(); i++)
    // {
    //     for (int t = i + 1; t < digits.size(); t++)
    //     {
    //         resItem=digits[i]+digits[t];
    //         res.push_back(resItem);
    //     }
    // }
    for (int digit : res) {
        cout << digit << " ";
    }

    return 0;
}
