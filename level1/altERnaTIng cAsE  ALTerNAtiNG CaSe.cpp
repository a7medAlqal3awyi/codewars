// altERnaTIng cAsE <=> ALTerNAtiNG CaSe
// altERnaTIng cAsE <=> ALTerNAtiNG CaSe
// Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

// "hello world".toAlternatingCase() === "HELLO WORLD"
// "HELLO WORLD".toAlternatingCase() === "hello world"
// "hello WORLD".toAlternatingCase() === "HELLO world"
// "HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
// "12345".toAlternatingCase()       === "12345"                   // Non-alphabetical characters are unaffected
// "1a2b3c4d5e".toAlternatingCase()  === "1A2B3C4D5E"
// "String.prototype.toAlternatingCase".toAlternatingCase() === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"

// My solution
#include <string>
using namespace std;

string to_alternating_case(const string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            result += toupper(str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            result += tolower(str[i]);
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

// Other solution
#include <iostream>

std::string to_alternating_case(std::string str)
{
  for(auto& ch : str)
  {
    ch = std::islower(ch) ? std::toupper(ch) : std::tolower(ch);
  }
  return str;
}