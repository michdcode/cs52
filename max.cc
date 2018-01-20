#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	//Initalize variables
	int one, two, three, high; 

	// Obtain the numbers
	cout << "Please enter the first number";
	cin >> one;
	cin.ignore();
	cout << "Please enter the second number";
	cin >> two;
	cout << "Please enter the third number";
	cin >> three; 

	high = one;
	if (two > high)
		high = two;
	if (three > high)
		high = three;
	
	cout << endl;
	cout << "The maximum is: " << high << endl;

	return 0;
}