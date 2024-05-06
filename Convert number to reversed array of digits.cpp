// Convert number to reversed array of digits
// Convert number to reversed array of digits
// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

// Example(Input => Output):
// 35231 => [1,3,2,5,3]
// 0 => [0]

// My solution
#include <vector>
#include <iostream>
using namespace std;
#include <vector>

std::vector<int> digitize(unsigned long n)
{
    std::vector<int> v;
    std::string s = std::to_string(n);
    std::reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
        v.push_back(s[i] - '0');
    return v;
}