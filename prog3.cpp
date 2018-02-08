#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual double area() = 0;
};

class Square : public Shape
{
	private:
		int side;

	public:
		Square (int uSide) { side = uSide;}
		virtual double area(int mSide) { return mSide * 4; } 
		int getSize () { return side; }
};

class Retangle : public Shape
{
	private:
		int length, width;

	public:
		Square (int uLength, uWidth) { length = uLength; width = uWidth;}
		virtual double area(int mLength, int mWidth) { return mLength * mWidth; } 
		int getLength () { return length; }
		int getWidth () { return width; }
};
