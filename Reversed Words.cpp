// Reversed Words

// DESCRIPTION:
// Complete the solution so that it reverses all of the words within the string passed in.

// Words are separated by exactly one space and there are no leading or trailing spaces.

// Example(Input --> Output):
// "The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"
#include <string>
#include <vector>
#include <iostream>

using namespace std;
string reverse_words(const std::string &str)
{

    string s = str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + i, s.begin() + i + 1);
        }
    }
    return s;
}

