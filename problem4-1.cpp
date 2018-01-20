#include <iostream>
#include <fstream>
#include <string>
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
	while (inputFile )




	inputFile.close();
	return 0;
}