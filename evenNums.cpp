#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
	int number; 

	cout << "Please enter an integer: ";
	cin >> number; 

	for (int num = 0; num < number; num++)
	{	
		if (num % 2 == 0)
			cout << num;
	}
	return 0;
}