// Thinkful - Logic Drills: Traffic light
// You're writing code to control your town's traffic lights. You need a function to handle each change from green, to yellow, to red, and then to green again.

// Complete the function that takes a string as an argument representing the current state of the light and returns a string representing the state the light should change to.

// For example, when the input is green, output should be yellow.

// // My solution

#include <string>
std::string update_light(std::string current)
{
    std::string next;

    switch (current[0])
    {
    case 'r':
        next = "green";
        break;
    case 'y':
        next = "red";
        break;
    case 'g':
        next = "yellow";
        break;
    }

    return next;
}

// Other solutions

 #include <string>   
std::string update_light(std::string current) {

    static std::map<std::string, std::string> light_states{
        {"red", "green"},
        {"yellow", "red"},
        {"green", "yellow"}
    };

    return light_states[current];
}