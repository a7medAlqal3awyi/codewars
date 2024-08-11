using namespace std;
#include <algorithm>
#include <iostream>
#include <string>

string solve(string s)
{
    string reversed;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[reversed.length()] == ' ')
        {
            reversed += ' ';
        }
        if (s[i] != ' ')
        {
            reversed += s[i];
        }
    }
    cout << reversed;
    return reversed;
}

int main()
{
    solve("your code rocks");
}
