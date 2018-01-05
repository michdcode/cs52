// Michelle Dicks
// CS 52
// Assignment #1

#include <iostream>
using namespace std;

int main ()
{
	// initialize variables
	int month;

	// explain program & get selection 
	cout << "This program determines the season based on the month." << endl;
	cout << "The months are as follows: " << endl;
	cout << "1. January, 2. February, 3. March" << endl;
	cout << "4. April, 5. May, 6. June" << endl;
	cout << "7. July, 8. August, 9. September" << endl;
	cout << "10. October, 11. November, 12. December" << endl;
	cout << "Please enter the month: " << endl;
	cin >> month; 

	// display result
	if (month > 0 && < 4)
		cout << "Month " << month << " is in spring!";
	if (month > 3 && < 7)
		cout << "Month " << month << " is in summer!";
	if (month > 6 && < 10)
		cout << "Month " << month << " is in fall!";
	if (month > 9 && < 13)
		cout << "Month " << month << " is in winter!";
	if (month < 0)
		cout << "That is not a valid month!";
	if (month > 12)
		cout << "That month must be in the future.";

	return 0;
}