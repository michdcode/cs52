// Michelle Dicks
// CS 52
// Assignment #3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Constants & function prototypes 
int const SIZE = 5; 
void getMinimum(const int [][SIZE], int);
void getMaximum(const int [][SIZE], int);
void getAverage(const int [][SIZE], int);

int main()
{
	int matrix[SIZE][SIZE] = {
	{7, 2, 10, 3, 6},
	{1, 12, 2, 0, 20},
	{3, 14, 19, 5, 4},
	{6, 0, 17, 18, 8},
	{1, 13, 10, 9, 11}};

	// Function calls to get minimum, maximum & average
	getMinimum(matrix, SIZE);
	getMaximum(matrix, SIZE);
	getAverage(matrix, SIZE);
	
	// Display results
	// cout << "Min: " << minimum << ", Max: " << maximum << ", Avg: " << showpoint << setprecision(2) << average << endl;
	return 0;
}

/********************************************************************
*							getMinimum								*
* This function determines the smallest number in the 5 x 5 matrix.	*
********************************************************************/
void getMinimum(const int arr[][SIZE], int rows)
{	int min = arr[0][0];

	for (int m = 0; m < rows; m++) // this loops over each column
	{
		for (int n = 0; n < SIZE; n++) // this will loop over each row 
		{
			if (arr[m][n] < min)
				min = arr[m][n];
		}
	}
	cout << "\nminimum is: " << min << endl;
}

/********************************************************************
*							getMaximum								*
* This function determines the largest number in the 5 x 5 matrix.	*
********************************************************************/


void getMaximum(const int arr[][SIZE], int rows)
{	int max = arr[0][0];

	for (int m = 0; m < rows; m++) 
	{
		for (int n = 0; n < SIZE; n++)  
		{
			if (arr[m][n] > max)
				max = arr[m][n];
		}
	}
	cout << "\nmaximum is: " << max << endl;
}

/********************************************************************
*							getMaximum								*
* This function determines the largest number in the 5 x 5 matrix.	*
********************************************************************/


void getAverage(const int arr[][SIZE], int rows)
{	int sum, count;
	float average, r;

	for (int m = 0; m < rows; m++) // this loops over each column
	{
		for (int n = 0; n < SIZE; n++) // this will loop over each row 
		{
			count ++;
			sum = sum + arr[m][n];
		}
	}
	cout << endl;
	average = sum/count;
	// r = (static_cast<double>(sum)) % (static_cast<double>(count));
	r = remainder(static_cast<float>(sum), static_cast<float>(count)); 
	cout << "\naverage is: " << average << ".";
	cout << setprecision(2) << r;
}

