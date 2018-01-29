// Michelle Dicks
// CS 52
// Assignment #4

#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
int checkValidity(int &number);
int recursive(unsigned int n);

int main()
{
	// declare variables 
	int num, pwr, cn, total;

	// Obtain user input and validate
	cout << "Input: ";
	cin >> num;
	checkValidity(num);

	cout << recursive(num);

	return 0;

}

/************************************************************************
*							checkValidity								*
*	Checks that any int input value is greater than zero. 				*
************************************************************************/

int checkValidity(int &number)
{
	while (number < 0)
	{
		cout << "The value must be greater than zero.\n"
			 << "Please enter a value greater than zero. \n >";
		cin >> number;
	}

	return number;
}

/************************************************************************
*							recursive									*
*	Determines the next power of 3.						 				*
************************************************************************/
int recursive(unsigned int n)
{
	if (n == k)
		return 1;
	else
		return (power(3, recursive(n + 1));
}