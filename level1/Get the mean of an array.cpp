// Get the mean of an array
// It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

// Return the average of the given array rounded down to its nearest integer.

#include <vector>

int get_average(std::vector <int> marks)
{
    int sum = 0;
for(int i=0;i<marks.size();i++){
    sum+=marks[i];
}
return sum/marks.size();
}