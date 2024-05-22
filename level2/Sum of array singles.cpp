// Sum of array singles
// DESCRIPTION:
// In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.

// For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once, and their sum is 15. Every other number occurs twice.

// More examples in the test cases.

// Good luck!

int repeats(std::vector<int> v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            res += v[i];
        }
    }
    return res;
}
