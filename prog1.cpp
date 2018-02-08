#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cout << "Please enter a line of text: ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'a') 
		{
		 	input[i] = '1';
		}
		else if (input[i] == 'e')
		{
		 	input[i] = '2';
		}
		else if (input[i] == 'i')
		{
		 	input[i] = '3';
		}
		else if (input[i] == 'o')
		{
		 	input[i] = '4';
		}
		else if (input[i] == 'u')
		{
		 	input[i] = '5';
		}
	}

	cout << input; 

	return 0;
}