// Michelle Dicks
// CS 52
// Assignment #2

#include <iostream>
#include <cmath>
using namespace std;

/* Two helpers were used to find this solution:
1. The mathematical formula to determine whether n is a Fibonacci number is: 
n is a Fibonacci number if and only if 5*n^2 + 4 or 5*n^2-4 is a square.
The formula came from this math website:
http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html#section5

2. The function to determine if a number is a whole number came from this website:
https://stackoverflow.com/questions/9612839/is-there-a-way-to-check-if-a-variable-is-a-whole-number-c#9612851
*/

// Function prototype
bool isFibonacci(int);

int main(){
	int ans, n = 21;
	ans = isFibonacci(n);
	if (ans == 0)
		cout << "False";
	if (ans == 1)
		cout << "True";
	return 0;

}

bool isFibonacci(int num)
{
	int sq, testOne, testTwo;

	sq = pow(num, 2);
	testOne = (5 * sq) + 4;
	testTwo = (5 * sq) - 4;
	if (floor(sqrt (testOne)) == sqrt (testOne))
		return 1;
	else if 
		(floor(sqrt (testTwo)) == sqrt (testTwo))
		return 1;
	else 
		return 0;
}