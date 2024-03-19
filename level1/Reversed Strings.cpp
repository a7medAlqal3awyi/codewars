// Reversed Strings
// Complete the solution so that it reverses the string passed into it.

// 'world'  =>  'dlrow'
// 'word'   =>  'drow'
#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    string ss;
    for (int i = str.length() - 1; i > -1; i--)
    {
        ss += str[i];
    }
    return ss;
}
