// Michelle Dicks
// CS 52
// Assignment #3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Constants & function prototypes 
int const SIZE = 5; 
int getMinimum(const int [][SIZE], int);
int getMaximum(const int [][SIZE], int);
double getAverage(const int [][SIZE], int);

int main()
{
	// declare variables
	int minimum, maximum;
	double average;

	// declare & initialize matrix
	int matrix[SIZE][SIZE] = {
	{7, 2, 10, 3, 6},
	{1, 12, 2, 0, 20},
	{3, 14, 19, 5, 4},
	{6, 0, 17, 18, 8},
	{1, 13, 10, 9, 11}};

	// Function calls to get minimum & maximum
	minimum = getMinimum(matrix, SIZE);
	maximum = getMaximum(matrix, SIZE);
	average = getAverage(matrix, SIZE);
	
	// Display results
	cout << "Min: " << minimum << ", Max: " << maximum << ", Avg: " << average << endl;
	
	
	return 0;
}

/********************************************************************
*							getMinimum								*
* This function determines the smallest number in the 5 x 5 matrix.	*
********************************************************************/
int getMinimum(const int arr[][SIZE], int rows)
{	int min = arr[0][0];

	for (int m = 0; m < rows; m++) // this loops over each column
	{
		for (int n = 0; n < SIZE; n++) // this will loop over each row 
		{
			if (arr[m][n] < min)
				min = arr[m][n];
		}
	}
	return min;
}

/********************************************************************
*							getMaximum								*
* This function determines the largest number in the 5 x 5 matrix.	*
********************************************************************/

int getMaximum(const int arr[][SIZE], int rows)
{	int max = arr[0][0];

	for (int m = 0; m < rows; m++) 
	{
		for (int n = 0; n < SIZE; n++)  
		{
			if (arr[m][n] > max)
				max = arr[m][n];
		}
	}
	return max;
}

/********************************************************************
*							getMaximum								*
* This function finds the average number in the 5 x 5 matrix.		*
********************************************************************/

double getAverage(const int arr[][SIZE], int rows)
{	double sum = 0.0, count = 0.0, average, r;

	for (int m = 0; m < rows; m++) 
	{
		for (int n = 0; n < SIZE; n++)
		{
			count ++;
			sum = sum + arr[m][n];
		}
	}
	average = sum/count;
	return average; 
}

