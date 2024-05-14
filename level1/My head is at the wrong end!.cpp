// My head is at the wrong end!
// You're at the zoo... all the meerkats look weird. Something has gone terribly wrong - someone has gone and switched their heads and tails around!

// Save the animals by switching them back. You will be given an array which will have three values (tail, body, head). It is your job to re-arrange the array so that the animal is the right way round (head, body, tail).

// Same goes for all the other arrays/lists that you will get in the tests: you have to change the element positions with the same exact logics

// Simples!

#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr)
{

    std::string last = arr[0];
    arr[0] = arr[2];
    arr[2] = last;
    return arr;
}

// Other solutions
std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::array<std::string, 3> res;

        for (int i = 0; i < 3; i++)
        {
            res[i] = arr[2 - i];
        }
        return res;
    }
}