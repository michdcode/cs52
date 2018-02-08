#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void getNum(int &);
int checkSize(int &);

int main ()
{
	int size, goodNum, half; 
	string plus;
	
	getNum(size);
	goodNum = checkSize(size); 
	half = (size / 2) + 1; 

	for (int i = 0; i < goodNum + 1; i++)
	{
		if (i == half) 
		{
			cout << plus.assign(goodNum, 'X');
			cout << endl; 
		}
		else
		{
			cout << setw(half) << "X" << endl; 
		}
	}

	return 0;
}

void getNum(int &userNum)
{
	cout << "Please enter the size: ";
	cin >> userNum;
}


int checkSize(int &mySize)
{
	if (mySize % 2 == 0)
	{
		mySize = mySize + 1;
	}

	return mySize; 
}