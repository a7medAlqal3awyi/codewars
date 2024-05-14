// Convert a string to an array
// DESCRIPTION:
// Write a function to split a string and convert it into an array of words.

// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]

// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]


#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {


    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            temp += s[i];
        }
        else {
            result.push_back(temp);
            temp = "";
        }
    }
    result.push_back(temp);
    return result;
}
