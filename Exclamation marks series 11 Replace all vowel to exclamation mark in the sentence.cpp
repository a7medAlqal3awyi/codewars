// Exclamation marks series #11: Replace all vowel to exclamation mark in the sentence
// Description:
// Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

// Examples
// replace("Hi!") === "H!!"
// replace("!Hi! Hi!") === "!H!! H!!"
// replace("aeiou") === "!!!!!"
// replace("ABCDE") === "!BCD!"
using namespace std;

#include <string>
string replace(const string s)
{
    string vowels = "aeiouAEIOU";

    for (auto c : s)
        if (vowels.find(c) != string::npos)
            c = '!';

    return move(s);
}

//other solution
#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
  return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}


#include <string>
#include <iostream>
using namespace std;
std::string replace(const std::string &s)
{
	string answer;
	int string_length = s.length();
	for (int x = 0; x < string_length; x++){
		char temp = s.at(x);
		
		if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' || temp == 'i' || temp == 'I' || temp == 'o' || temp == 'O' || temp == 'u' || temp == 'U'){
			answer += '!';
		} else {
			answer += temp;
		}
	}
    return answer; //coding and coding....
}
