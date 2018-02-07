// Michelle Dicks
// CS 52
// Assignment #5

#include <iostream>
#include <string>
using namespace std;

// classes
class Item 
{
	private:
		string title, description;
		double price;
	public:
		// Mutator & Accessor function prototypes
		void setTitle(string);
		void setDescription(string);
		void setprice(double);
		string getTitle() const;
		string getDescription() const;
		double getPrice() const;
};

class Book : public Item 
{
	private:
		int pageCount;
	public:
		void setpageCount(int);
		int getPageCount() const;
};

class Movie : public Item 
{
	private:
		double length;
	public:
		void setlength(double);
		double getlength() const;
};

class CD : public Item
{
	private:
		int trackCount;
	public:
		void settrackCount(int);
		int getTrackCount() const;
};

class ShoppingCart
{
	private:
		int const size = 5;
		Item cart([SIZE]); // ? ptr to an array instead
	public:
		void addItemToCart(Item);
		Item getCart() const; //? getting an array of objects
};

class Customer
{
	private:
		int ID;
		string firstName, lastName;
		ShoppingCart *customerCart // ptr to a ShoppingCart object
	public:


};
