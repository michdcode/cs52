// Michelle Dicks
// CS 52
// Assignment #2

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getValidNumber(double &current);
void displayResults(double, double);

int main()
{
	// Declare variables
	double average, count, sum = 0, currentNum = 0;

	// Get valid user input 
	while (currentNum != -1)
		{
			getValidNumber(currentNum);
			count ++;
			cout << currentNum;
			sum = sum + currentNum;
		}

	sum = sum + 1;
	count = count - 1;
	average = sum/count;

	// Show Results
	displayResults(sum, average);
	
	return 0;
}

double getValidNumber(double &current)
{
	// Obtain number from user
	cout << endl;
	cout << "If finished, enter -1, otherwise, enter a positive number: " ;
	cin >> current; 

	// Validate user input
	while (current < -1)
	{
		cout << "\n The number must be greater than -1.\n";
		cout << "Please enter a valid number: ";
		cin >> current; 
	}

	// return valid number to main function
	return current;
}

void displayResults(double total, double avg)
{
	cout << endl;
	cout << "Sum: " << total << endl;
	cout << "Average: " << fixed << showpoint << setprecision(2) << avg << endl;   
}