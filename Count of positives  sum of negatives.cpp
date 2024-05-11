// Count of positives / sum of negatives
// DESCRIPTION:
// Given an array of integers.

// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

// If the input is an empty array or is null, return an empty array.

// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int sumPos = 0, sumNeg = 0;

    if (input.empty())
        return {};

    for (int i : input)
    {
        if (i > 0)
        {
            sumPos++;
        }
        else if (i < 0)
        {
            sumNeg += i;
        }
    }

    return {sumPos, sumNeg};
}
// other solution
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty())
        return {};
    int countPositives{0}, sumNegatives{0};
    for (int x : input)
        x > 0 ? countPositives++ : (x != 0 ? sumNegatives += x : 0);
    return {countPositives, sumNegatives};
}