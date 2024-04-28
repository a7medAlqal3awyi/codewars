// Sort and Star
// DESCRIPTION:
// You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

// The returned value must be a string, and have "***" between each of its letters.

// You should not remove or add elements from/to the array.


#include <vector>
#include <string>

std::string twoSort(std::vector<std::string> s)
{
    string result = *min_element(s.begin(), s.end());
    for (int i = 1; i < result.size(); i += 4)
      result.insert(i, "***");
    return result;
}
