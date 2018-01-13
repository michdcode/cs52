// Michelle Dicks
// CS 52
// Assignment #2
#include <iostream>
using namespace std;

// Function prototype
void triDisplay(int stars);

int main()
{
	// Declare variables
	int size;

	// Get user input 
	cout << "Enter size: ";
	cin >> size;
	cout << endl;

	// Function call
	triDisplay(size);
	return 0;
}

void triDisplay(int stars)
{
	for (int i = 1; i < stars + 1; i++)
	{
		cout.fill('*');  
  		cout.width(i);  
  		cout << "" << endl;
	}
}