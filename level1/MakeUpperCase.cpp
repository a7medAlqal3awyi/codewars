// MakeUpperCase
// DESCRIPTION:
// Write a function which converts the input string to uppercase.

#include <string>
#include <iostream>
using namespace std;

std::string makeUpperCase(const std::string &input_str)
{
    string res = "";
    for (int i = 0; i < input_str.length(); i++)
    {

        res += toupper(input_str[i]);
    }
    return res;
}
int main()
{
    cout << makeUpperCase("hello");
}