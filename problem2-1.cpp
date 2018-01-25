// Michelle Dicks
// CS 52
// Assignment #3

#include <iostream>

using namespace std;

// function prototype
void selectionSort(int *numList, int SIZE);

int main ()
{
	// declare variables & array pointer
	int size;
	int *numbers;

	// obtain user input for size of array 
	cout << "Enter a size: ";
	cin >> size;

	// dynamically allocate array
	numbers = new int[size];

	// obtain user input for array contents
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Item " << (i + 1) << ": ";
		cin >> numbers[i];
	}

	// sort the array 
	selectionSort(numbers, size);

	// print the sorted array
	cout << endl; 
	cout << "Sorted: ";
	for (int i = 0; i <size; i++)
		cout << numbers[i] << ", ";
	cout << endl;
	
	// free up memory 
	delete [] numbers;
	numbers = 0;

	return 0;
}

/********************************************************************
*							selectionSort							*
* This function sorts the array from lowest to highest.				*
* NOTE: the code for this sort comes from lecture 8.				*
********************************************************************/

void selectionSort(int *numList, int SIZE)
{	
	for (int i = 0; i < SIZE; i++)
		{
			for (int k = i + 1; k < SIZE; k++)
			{
				if (numList[k] < numList[i])
					{
						int tmp = numList[i];
						numList[i] = numList[k];
						numList[k] = tmp;
			}
		}
	}
}