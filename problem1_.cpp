// Michelle Dicks
// CS 52
// Assignment #2

#include <iostream>
using namespace std;

int main() {
  // declare variables
  int candleSize, wickSize;
  
  // gather user input
  cout << "Please enter the candle size: ";
  cin >> candleSize;
  cout << endl;
  cout << "Please enter the wick size: ";
  cin >> wickSize;

  // generate candle
  
  cout << endl;
  cout.fill('=');  
  cout.width(candleSize);  
  cout << "";
  cout.fill('-');
  cout.width(wickSize);
  cout << "";

	return 0;
}