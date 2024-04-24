// Multiplication table for number
#include <string>
#include <iostream>

using namespace std;

std::string multi_table(int number)
{
    string res = "";
    for (int i = 1; i <= 10; i++)
    {
        res += (to_string(i) + " * " + to_string(number) + " = " + to_string(i * number) +(i == 10 ? "" : "\n"));
    }
    cout << res << endl;
    return res;
}
int main()
{

    multi_table(5);
}