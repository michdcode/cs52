#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
	// declare variables
	ifstream inputFile;
	string fileName, endFile;
	char currentCharacter;
	int lowercase = 0, uppercase = 0, digit = 0, space = 0;

	// Get the user to input the file name
	cout << "Please enter the full path and file name: ";
	cin >> fileName;

	// open file and check for error 
	inputFile.open(fileName.c_str());

	if (inputFile.fail())
		cout << "Error opening the file";

	// process file contents
	while (inputFile >> endFile)
	{
		space ++; // have to do it this way because isspace will count a newline and tabs as spaces
		for (int i = 0; i < endFile.length(); i++)
		{
			if (islower(endFile[i]))
				lowercase ++;
			else if (isupper(endFile[i])) 
				uppercase ++;
			else if (isdigit(endFile[i]))
				digit ++;
		}
	}
	// display results
	cout << endl;
	cout << "File contains" << endl;
	cout << "Lowercase letters: " << lowercase << endl;
	cout << "Uppercase letters: " << uppercase << endl;
	cout << "Digits: " << digit << endl;
	cout << "Spaces: " << space << endl; 

	// close file 
	inputFile.close();
	return 0;
}