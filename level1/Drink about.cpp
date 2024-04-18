// DESCRIPTION:
// Kids drink toddy.
// Teens drink coke.
// Young adults drink beer.
// Adults drink whisky.
// Make a function that receive age, and return what they drink.

// Rules:

// Children under 14 old.
// Teens under 18 old.
// Young under 21 old.
// Adults have 21 or more.
// Examples: (Input --> Output)

// 13 --> "drink toddy"
// 17 --> "drink coke"
// 18 --> "drink beer"
// 20 --> "drink beer"
// 30 --> "drink whisky"

// My solution
#include <string>

std::string people_with_age_drink(int age)
{
    if (age < 14)
        return "drink toddy";
    else if (age < 18)
        return "drink coke";
    else if (age < 21)
        return "drink beer";

    else
        return "drink whisky";
}

// OTHER SOLUTIONS
#include <string>

std::string people_with_age_drink(unsigned int age)
{
  switch(age)
  {
      case 0  ... 13 : return "drink toddy";
      case 14 ... 17 : return "drink coke";
      case 18 ... 20 : return "drink beer";
      default        : return "drink whisky";
  }
}