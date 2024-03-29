// All Star Code Challenge #18
// Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

// If no occurrences can be found, a count of 0 should be returned.

// ("Hello", "o")  ==>  1
// ("Hello", "l")  ==>  2
// ("", "z")       ==>  0
// str_count("Hello", 'o'); // returns 1
// str_count("Hello", 'l'); // returns 2
// str_count("", 'z'); // returns 0
// Notes
// The first argument can be an empty string
// In languages with no distinct character data type, the second argument will be a string of length 1

// my solution
#include <string>
using namespace std;

unsigned int strCount(string word, char letter)
{
    int counter = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == letter)
        {
            counter++;
        }
    }

    return counter;
}

/// other solutions
#include <string>

unsigned int strCount(std::string word, char letter){
  return count(word.begin(), word.end(), letter);
}
