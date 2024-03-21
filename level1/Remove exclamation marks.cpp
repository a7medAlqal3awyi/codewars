
// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

#include <string>

std::string removeExclamationMarks(std::string str)
{
   char valueToBeDeleted = '!';
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == valueToBeDeleted)
        {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}