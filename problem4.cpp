// Michelle Dicks
// CS 52
// Assignment #1

#include <iostream>
using namespace std;

int main ()
{
	// initialize variables
	int month;

	// get selection 
	cout << "Please enter a month (1-12): ";
	cin >> month; 

	// display result
	if ((month > 0) && (month < 4))
		cout << "Month " << month << " is in spring!" << endl;
	if ((month > 3) && (month < 7))
		cout << "Month " << month << " is in summer!" << endl;
	if ((month > 6) && (month < 10))
		cout << "Month " << month << " is in fall!" << endl;
	if ((month > 9) && (month < 13))
		cout << "Month " << month << " is in winter!" << endl;
	if (month <= 0)
		cout << "That is not a valid month!" << endl;
	if (month > 12)
		cout << "That month must be in the future." << endl;

	return 0;
}