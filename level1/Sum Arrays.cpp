// Sum Arrays
// DESCRIPTION:
// Write a function that takes an array of numbers and returns the sum of the numbers. The numbers can be negative or non-integer. If the array does not contain any numbers then you should return 0.

// Examples
// Input: [1, 5.2, 4, 0, -1]
// Output: 9.2

// Input: []
// Output: 0

// Input: [-2.398]
// Output: -2.398

// My solution

#include <vector>
#include <iostream>

int sum(std::vector<double> nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    double result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        result += nums[i];
    }
    return result;
}

int main()
{
    std::vector<double> nums = {-5, -2, -1, 0, 1, 2, 3, 4, 5, 2.2};
    std::cout << sum(nums) << std::endl;
    return 0;
}