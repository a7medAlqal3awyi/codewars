cmake_minimum_required(VERSION 3.10)
project(codewars)

set(CMAKE_CXX_STANDARD 14)

# Add executable for Even_odd_disparity.cpp
add_executable(even_odd_disparity_exec
        level2/Even_odd_disparity.cpp
        "level2/Odd Ones Out! .cpp"
        "level2/Simple string reversal .cpp"
)


# Add executable for tee.cpp
add_executable(every_exec
        "level2/Every possible sum of two digits.cpp"
)
add_executable(ood_ones_exec
        "level2/Odd Ones Out! .cpp"
)
add_executable(Simple_string_reversal_exec
        "level2/Simple string reversal .cpp"
)
