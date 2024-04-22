// Array plus array
// DESCRIPTION:
// I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

// P.S. Each array includes only integer numbers. Output is a number too.

// My solution

#include <vector>
#include <iostream>
using namespace std;
int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
    int res;
    for (int i = 0; i < a.size(); i++)
    {
        res += a[i];
    }
    for (int j = 0; j < b.size(); j++)
    {
        res += b[j];
    }
    return res;
}

// Best solution
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
    int total = 0;
    for (int i : a)
        total += i;
    for (int i : b)
        total += i;
    return total;
}

int main()
{
    cout << arrayPlusArray({1, 2, 3}, {4, 5, 6});
}