// Michelle Dicks
// CS 52
// Assignment #3

#include <iostream>
#include <string>
using namespace std;

// Function prototypes 
char findFirst(string); 

int main ()
{
	// declare variables
	string userInput;
	char result;

	// obtain user input
	cout << "Please enter a string: ";
	getline(cin, userInput);

	// call function
	result = findFirst(userInput);

	// print character
	cout << endl;
	cout << result;
    cout << endl;

	return 0;
}

/*********************************************************************
*							findFirst								 *
* This function finds the first non-repeated character in the string.*
*********************************************************************/

char findFirst(string phrase)
{
	int j = 1;
	int l;
	l = phrase.length();

	for (int i = 0; i < l; i++)
	{
		if (phrase.rfind(phrase.at(i), l) == i)
			if (phrase.find(phrase.at(i), 0) == i)
                return phrase.at(i);
		j++;
	}
}