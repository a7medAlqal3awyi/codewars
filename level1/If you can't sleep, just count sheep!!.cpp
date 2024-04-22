// If you can't sleep, just count sheep!!
// DESCRIPTION:
// If you can't sleep, just count sheep!!

// Task:
// Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.

// My solution
#include <string>
#include <iostream>
using namespace std;
std::string countSheep(int number)
{
    string res = "";
    
    for (int i = 1; i <= number; i++)
    {
        res += to_string(i) + " sheep...";
    }
    return res;
}
int main()
{
    cout << countSheep(0) << endl;
    cout << countSheep(1) << endl;
    cout << countSheep(2) << endl;
    cout << countSheep(3) << endl;
    cout << countSheep(4) << endl;
    cout << countSheep(5) << endl;
    cout << countSheep(6) << endl;
    cout << countSheep(7) << endl;
    cout << countSheep(8) << endl;
    cout << countSheep(9) << endl;
    cout << countSheep(10) << endl;
}