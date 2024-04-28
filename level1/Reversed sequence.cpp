// Reversed sequence
// Build a function that returns an array of integers from n to 1 where n>0.

// Example : n=5 --> [5,4,3,2,1]

using namespace std;
#include <vector>
std::vector<int> reverseSeq(int n) {
    vector<int> result;
    for (int i = n; i > 0; i--) {
        result.push_back(i);
    }
    return result;
}