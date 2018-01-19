// Michelle Dicks
// CS 52
// Assignment #3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes & constants
int const COLS = 5; 
int getMinimum(const int matrix[][COLS], int rows, int &min);
int getMaximum(const int matrix[][COLS], int rows, int &max);
float getAverage(const int matrix[][COLS], int rows, float &avg);


int main()
{
	// Declare variables and constants
	const int SIZE = 5;
	int minimum, maximum, average;
	int matrix[SIZE][SIZE] = {
	{7, 2, 10, 3, 6},
	{1, 12, 2, 0, 20},
	{3,14,19, 5, 4},
	{6, 0, 17, 18, 8},
	{1, 13, 10, 9, 11}};

	// Function calls to get minimum, maximum & average
	// getMinimum(matrix, minimum);
	// getMaximum(matrix, maximum);
	getAverage(matrix, average);
	cout << average; 
	// Display results
	// cout << "Min: " << minimum << ", Max: " << maximum << ", Avg: " << showpoint << setprecision(2) << average << endl;



	return 0;
}

float getAverage(const int matrix[][COLS], int rows, float &avg) 
{
	// set local variables
	int total = 0, count = 0;
	const int SIZE = 5;

	// iterate over matrix, count each number and sum all numbers 
	for (int row = 0; row < SIZE; row++)
		{	
			for (int col = 0; col < SIZE; col++)
			{
				count++;
				total = total + matrix[row][col];
			}
	avg = total/count;
	return avg;

}