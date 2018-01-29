// Michelle Dicks
// CS 52
// Assignment #4

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// Employee Structure
struct Employee
{
	string firstName, lastName;
	int pay;
};

// Function prototype for printing 
void printEmployees(Employee *, int);

int main()
{
	// Initialize variables and pointers 
	int n, p;
	Employee *usersEmployees;
	string fn, ln; 

	// Get number of employees from user
	cout << "Number of employees: ";
	cin >> n;

	// dynamically allocate array
	usersEmployees = new Employee[n];  

	// Get the information for each employee and add it to the array
	for (int c = 0; c < n; c++)
	{
		cin.ignore();
		cout << "Employee " << (c + 1) << endl;
		cout << "First Name: ";
		getline(cin, fn); 
		usersEmployees[c].firstName = fn;
		cout << "Last Name: ";
		getline(cin, ln);
		usersEmployees[c].lastName = ln;
		cout << "Pay: ";
		cin >> p;
		usersEmployees[c].pay = p;
	}

	// Call function that prints elements of array
	printEmployees(usersEmployees, n);

	// Free memory
	delete [] usersEmployees;
}

/************************************************************************
*							print Employees								*
*	This function will print out each of the Employee objects in the 	*
*	array containing the employee information. 							*
************************************************************************/
void printEmployees(Employee *userArray, int num)
	{
		cout << endl; 
		cout << "Employees: " << endl;
		for (int count = 0; count < num; count ++)
		{
			cout << "Name: " << userArray[count].firstName << " ";
			cout << userArray[count].lastName << " (";
			cout << userArray[count].pay << ")" << endl;
		}	
	}