// From A to Z
// DESCRIPTION:
// Given a string indicating a range of letters, return a string which includes all the letters in that range, including the last letter.
// Note that if the range is given in capital letters, return the string in capitals also!

// Examples
// "a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
// "h-o" ➞ "hijklmno"
// "Q-Z" ➞ "QRSTUVWXYZ"
// "J-J" ➞ "J"

// my solution

#include <string>

std::string gimme_the_letters(const std::string &sp)
{
    std::string res ;
    char start = sp[0];
    char end = sp[2];
    for (size_t  i = start; i <= end; ++i)
    {
        res += i;
    }
    return res;
}
