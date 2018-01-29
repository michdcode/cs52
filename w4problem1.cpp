// Michelle Dicks
// CS 52
// Assignment #4

#include <iostream>
using namespace std;

// Function prototype
int recursive(unsigned int n);

int main()
{	int answer, times = 9;
	unsigned int userNum = 10;
	
	cout << recursive(userNum);

	return 0;
}

int recursive(unsigned int n)
{
	if (times > 0)
	{
		if (n == 1)
			answer = answer + 1;
		if (n == 3)
			answer = answer + 3;
		if (n == 9)
			answer = answer + 9;
		recursive(n - 1);
	}
}

// pract program - returns n/3**count

#include <iostream>
#include <cmath>
using namespace std;

int powers(int, int);
int main() {
	// your code goes here
	int x = 27;
	int now, tally; 
	
	for (int n = 0; n < x; n++)
		{
			now = x / powers(3, n);
			if (now <= 0)
				{cout << tally;
				break;}
			else
				{tally = ++ now;
				cout << "x divided by 3 to the power is " << now << endl;}
		}
	return 0;
}

int powers(int x, int n)
{
	if (n < 0)
	{
		cout << "Illegal argument to power. \n";
			exit(1);
	}
	if (n > 0)
		return (powers(x, n - 1)*x);
	else
		return (1);
}

