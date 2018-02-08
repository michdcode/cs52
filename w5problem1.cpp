// Michelle Dicks
// CS 52
// Assignment #5

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// classes
class Item 
{
	private:
		string title, description;
		double price;
	public:
		Item(string userTitle, string userDescription, double userPrice) 
		{
			setTitle(userTitle);
			setDescription(userDescription);
			setPrice(userPrice);
		}
		// Mutator & Accessor functions -- inline because they are short
		void setTitle(string userTitle) { title = userTitle; }
		void setDescription(string userDescription) { description = userDescription; }
		void setPrice(double userPrice) { price = userPrice; }
		string getTitle() { return title; }
		string getDescription() { return description; }
		// virtual function for getPrice because it will vary depending upon the type of item
		virtual double getPrice() { cout << " $" << price; }
};

class Book:public Item 
{
	private:
		double pageCount;
	public:
		// Constructor adds pageCount 
		Book(string uTitle, string uDescription, double uPrice, double uPageCount) 
		: Item(uTitle, uDescription, uPrice)
		{ 
			pageCount = uPageCount; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setpageCount(double iPageCount) { pageCount = iPageCount; }
		double getPageCount() { return pageCount; }
		// Override getPrice to include Page Count
		virtual double getPrice () { cout << "Page count: " << pageCount << " " << Item::getPrice();  }// may need to change to getPageCount
};

class Movie:public Item 
{
	private:
		double length;
	public:
		// Constructor adds length 
		Movie(string uTitle, string uDescription, double uPrice, double uLength) 
		: Item(uTitle, uDescription, uPrice)
		{ 
			length = uLength; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setlength(double iLength) { length = iLength; }
		double getlength() { return length; } 
		// Override getPrice to include Length
		virtual double getPrice () { cout << "Length: " << length << " " << Item::getPrice();  } 
};

class CD:public Item
{
	private:
		double trackCount;
	public:
		// Constructor adds trackCount 
		CD(string uTitle, string uDescription, double uPrice, double uTrackCount) 
		: Item(uTitle, uDescription, uPrice)
		{ 
			trackCount = uTrackCount; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setTrackCount(double iTrackCount) { trackCount = iTrackCount; }
		double getTrackCount() { return trackCount; }
		// Override getPrice to include track count
		virtual double getPrice () { cout << "Track Count: " << trackCount <<  " " << Item::getPrice();  }
};

class ShoppingCart
{
	private:
		vector<Item> cart;
	public:
		ShoppingCart(Item tempItem)
		{
			cart.push_back(tempItem);
		}
		void addItemToCart(string, string, double, double, int, int);
		void printCart(vector<Item>); 
};

class Customer
{
	private:
		int ID;
		string firstName, lastName;
		ShoppingCart *customerCart; // ptr to a ShoppingCart object
	public:
		Customer(int uID, string uFirstName, string uLastName, ShoppingCart *basket)
		{
			setID(uID);
			setFirstName(uFirstName);
			setLastName(uLastName);
		}
		// Mutator & Accessor functions -- inline because they are short
		void setID(int uID) { ID = uID; }
		void setFirstName(string uFirstName) { firstName = uFirstName; }
		void setLastName(string uLastName) { lastName = uLastName; }
		void setShoppingCart(ShoppingCart *basket) { *customerCart = *basket; } 
		int getID() {return ID; }
		string getFirstName() {return firstName; }
		string getLastName() {return lastName; }
		// ShoppingCart getShoppingCart() { return *customerCart; }
};

/************************************************************************
*						ShoppingCart::addItemToCart						*
*	This adds an item object to the shopping cart vector.				*
************************************************************************/
void ShoppingCart::addItemToCart(string mTitle, string mDescription, double mPrice, double mInfo, int type, int num) 
	{	
		if (type == 1) 
		{
			Book tempBook(mTitle, mDescription, mPrice, mInfo);
			ShoppingCart tempItem(tempBook);
		} 
		else if (type == 2)
		{
			Movie tempMovie(mTitle, mDescription, mPrice, mInfo);
			ShoppingCart tempItem(tempMovie);
		}
		else
		{
			CD tempCD(mTitle, mDescription, mPrice, mInfo);
			ShoppingCart tempItem(tempCD); 
		}
	}
/************************************************************************
*						ShoppingCart::printCart							*
*	Display all items in Shopping cart.									*
************************************************************************/
void printCart(vector<Item> cart)
	{
		for (int num = 0; num < cart.size(); num ++)
		{
			cout << "Item number: " << (num + 1) << endl;
			cout << cart[num].getTitle();
			cout << endl; 
			cout << cart[num].getDescription();
			cout << endl;
			cout << cart[num].getPrice();
		}
	}
/************************************************************************
*						Customer::printCart							*
*	Display all items in Shopping cart.									*
************************************************************************/











