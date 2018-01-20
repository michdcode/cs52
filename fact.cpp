#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int N;

	cout << "Enter a number: ";
	cin >> N;
	cout << "The factorial is: " << factorial(N);

	return 0;
}

int factorial(int number)
{
	if (number == 0)
		return 1;
	else
		return number * factorial(number - 1);
}