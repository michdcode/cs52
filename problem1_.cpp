// Michelle Dicks
// CS 52
// Assignment #2

#include <iostream>
using namespace std;

// Function prototype
void drawCandle(int, int);

int main() {
  	// Declare variables
  	int cSize, wSize;
  
  	// Gather user input
  	cout << "Please enter the candle size, it must be a positive integer: ";
  	cin >> cSize;
  	cout << endl;
  	cout << "Please enter the wick size, it must be a positive integer: ";
  	cin >> wSize;

  	// Function call
  	drawCandle(cSize, wSize);

  	return 0;
}
void drawCandle(int candleSize, int wickSize)
{
  	cout << endl;
  	cout.fill('=');  
  	cout.width(candleSize);  
  	cout << "";
  	cout.fill('-');
  	cout.width(wickSize);
  	cout << "";
}