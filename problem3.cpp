// Michelle Dicks
// CS 52
// Assignment #1

#include <iostream>
#include <cctype>
using namespace std;

int main ()
{
	// initialize variables; using double due to decimals, negatives or big numbers
	char choice, zero = 48; 
	double operA, operB, remain, result;

	// explain purpose of program
	cout << "Calculator" << endl;
	cout << "---------------------" << endl;
	cout << "What operation would you like to perform?" << endl;
	cout << "(1) Addition, (2) Subtraction, (3) Multiplication, or (4) Division" << endl;
	cout << "Enter the number that corresponds to your choice: "
	cin >> choice;

	switch (choice)
	{
		case '1': 
			cout << "Enter operand 1:";
			cin >> operA;
			cout << "Enter operand 2:";
			cin >> operB;
			result = operA + operB;
			cout << "The result is:" << operA << " + " << operB << " = " << result; 
			break;
		case '2': 
			cout << "Enter operand 1:";
			cin >> operA;
			cout << "Enter operand 2:";
			cin >> operB;
			result = operA - operB;
			cout << "The result is:" << operA << " - " << operB << " = " << result; 
			break;
		case '3': 
			cout << "Enter operand 1:";
			cin >> operA;
			cout << "Enter operand 2:";
			cin >> operB;
			result = operA * operB;
			cout << "The result is:" << operA << " * " << operB << " = " << result; 
			break;
		case '4':
			cout << "Enter the dividend";
			cin >> operA;
			cout << "Enter the divisor, it cannot be zero."
			cin >> operB;
			if (choice == '0') // can also use ASC2 character for zero set as var
				{
					cout << "That's a zero, and you cannot divide by zero." << endl;
					cout << "Please enter a divisor that is not zero."; 
					cin >> operB;
				}
			result = operA / operB;
			remain = operA % operB;
			cout << "The result is:" << operA << " / " << operB << " = " << result << " and the remainder is:" << remain; 
			break; 
		default: 
			cout << "You did not enter 1, 2, 3, or 4. \n The program is ending.\n";
	}
	return 0; 
}