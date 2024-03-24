// Remove First and Last Character
// DESCRIPTION:
// It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. 
//You're given one parameter, the original string. You don't have to worry about strings with less than two characters.

// My solution

#include <string>

using namespace std; 

string sliceString (string str )
{
    for(int i = 0; i < str.length(); i++){
        if(i == 0){
            str.erase(i, 1);
        }
        else if(i == str.length() - 1){
            str.erase(i, 1);
        }
    }
  return str ; 
}
// more simple solution

string sliceString (string str )
{
  return string(str.begin()+1,str.end()-1) ; 
}
