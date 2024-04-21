// Abbreviate a Two Word Name
// DESCRIPTION:
// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

// The output should be two capital letters with a dot separating them.

// It should look like this:

// Sam Harris => S.H

// patrick feeney => P.F

// My solution

#include <string>
#include <iostream>
using namespace std;
std::string abbrevName(std::string name)
{
  std::string temp = "";
  for (int i = 0; i < name.size(); i++)
  {
    if (i == 0)
    {
      temp += toupper(name[i]);
    }
    else if (name[i] == ' ')
    {
      temp += '.';
    }
    else if
      (name[i - 1] == ' ')
    {
      temp += toupper(name[i]);
    }
  }
  return temp;
}
// other solutions
std::string abbrevName(std::string name)
{
  std::string s = "";
  s += toupper(name[0]);
  s += '.';
  s += toupper(name[name.find(' ')+1]);
  return s;
}
int main()
{
  cout << abbrevName("Samn Harris") << endl;
  // cout << abbrevName("Patrick Feenan") << endl;
  // cout << abbrevName("Evan Cole") << endl;
  // cout << abbrevName("P Favuzzi") << endl;
  // cout << abbrevName("David Mendieta") << endl;
}