#include "date.h" // may need to rename this to have a capital "D"
#include <iostream>
#include <iomanip>

// function prototypes for main

int main()
{
	// declare variables; 
	int uMonth, uDay, uYear;

	// Get input from user
	cout << "Please enter the month number: ";
	cin >> uMonth;
	cout << "\nPlease enter the day of the month: ";
	cin >> uDay;
	cout >> "\nPlease enter the year: ";
	cin >> uYear;

	// Store the user input into the date object
	Date oneDate(uMonth, uDay, uYear);

	// Call functions to display dates
	oneDate.showDateSlash(); 
	oneDate.showDateAmerican();
	oneDate.showDateEuropean();

	return 0; 
}
