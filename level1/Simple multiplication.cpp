// DESCRIPTION:
// This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

//My Solution
int simpleMultiplication(int a){
    return a % 2 ? 9*a : 8*a; 
}