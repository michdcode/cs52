// Michelle Dicks
// CS 52
// Assignment #1

#include <iostream>
#include <cctype>
using namespace std;

int main ()
{
	// initialize variables; using double due to decimals, negatives or big numbers
	char choice; 
	double operA, operB, remain, result;

	// explain purpose of program
	cout << "Calculator" << endl;
	cout << "---------------------" << endl;
	cout << "What operation would you like to perform?" << endl;
	cout << "(+) Addition, (-) Subtraction, (*) Multiplication, or (/) Division" << endl;
	cout << "Enter the symbol that corresponds to your choice: ";
	cin >> choice;

	switch (choice)
	{
		case '+': 
			cout << "Enter operand 1: ";
			cin >> operA;
			cout << "Enter operand 2: ";
			cin >> operB;
			result = operA + operB;
			cout << "The result is: " << operA << " + " << operB << " = " << result << endl; 
			break;
		case '-': 
			cout << "Enter operand 1: ";
			cin >> operA;
			cout << "Enter operand 2: ";
			cin >> operB;
			result = operA - operB;
			cout << "The result is: " << operA << " - " << operB << " = " << result << endl; 
			break;
		case '*': 
			cout << "Enter operand 1: ";
			cin >> operA;
			cout << "Enter operand 2: ";
			cin >> operB;
			result = operA * operB;
			cout << "The result is: " << operA << " * " << operB << " = " << result << endl; 
			break;
		case '/':
			cout << "Enter the dividend: ";
			cin >> operA;
			cout << "Enter the divisor, it cannot be zero: ";
			cin >> operB;
			if (operB == 0)
				{
					cout << "That's a zero, and you cannot divide by zero." << endl;
					cout << "Please enter a divisor that is not zero: "; 
					cin >> operB;
				}
			result = operA / operB;
			cout << "The result is: " << operA << " / " << operB << " = " << result << endl; 
			break; 
		default: 
			cout << "You did not enter +, -, * or /. \n The program is ending.\n";
	}
	return 0; 
}