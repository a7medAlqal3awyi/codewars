// Calculate average
// Write a function which calculates the average of the numbers in a given list.

// Note: Empty arrays should return 0.

// My Solution
#include <vector>

double calcAverage(const std::vector<int> &values)
{
    double sum = 0;
    for (int i = 0; i < values.size(); i++)
    {
        sum += values[i];
    }
    return sum / values.size(); 
    if (values.size() == 0)
    {
        return 0;
    }
    
}