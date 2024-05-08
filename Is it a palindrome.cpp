// Is it a palindrome
// Write a function that checks if a given string (case insensitive) is a palindrome.

// A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.


// My solution
#include <string>
using namespace std;
bool isPalindrom (const std::string& str)
{

    string s = str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
   
}

