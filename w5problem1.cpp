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
		int pageCount;
	public:
		// Constructor adds pageCount 
		Book(string uTitle, string uDescription, double uPrice, double uPageCount) 
		: Item(uTitle, uDescription, uPrice)
		{ 
			pageCount = uPageCount; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setpageCount(int iPageCount) { pageCount = iPageCount; }
		int getPageCount() const { return pageCount; }
		// Override getPrice to include Page Count
		virtual double getPrice () const { return "Page count: " pageCount + " " + Item::getPrice();  }// may need to change to getPageCount
};

class Movie:public Item 
{
	private:
		double length;
	public:
		// Constructor adds length 
		Movie(string uTitle, string uDescription, string uPrice, double uLength) : Item(uTitle, uDescription, uPrice)
		{ 
			length = uLength; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setlength(double iLength) { length = iLength; }
		double getlength() const { return length; } 
		// Override getPrice to include Length
		virtual double getPrice () const { return "Length: " length + " " + Item::getPrice();  } 
};

class CD:public Item
{
	private:
		double trackCount;
	public:
		// Constructor adds trackCount 
		CD(string uTitle, string uDescription, string uPrice, double uTrackCount) : Item(uTitle, uDescription, uPrice)
		{ 
			trackCount = uTrackCount; 
		}
		// Mutator & Accessor functions -- inline because they are short
		void setTrackCount(int iTrackCount) { trackCount = iTrackCount; }
		int getTrackCount() const { return trackCount; }
		// Override getPrice to include track count
		virtual double getPrice () const { return "Track Count: " trackCount + " " + Item::getPrice();  }
};

class ShoppingCart
{
	private:
		const int NUM_ITEMS = 5;
		Item *cart[NUM_ITEMS];
	public:
		ShoppingCart(); // default constructor
		// ShoppingCart(Item); probably don't need this 
		void addItemToCart(Item);
		Item getCart() const; //? getting an array of objects
};

class Customer
{
	private:
		int ID;
		string firstName, lastName;
		ShoppingCart *customerCart; // ptr to a ShoppingCart object
	public:
		void setID(int);
		void setFirstName(string);
		void setLastName(string);
		void setShoppingCart(ShoppingCart*);
		int getID() const;
		string getFirstName() const;
		string getLastName() const;
};

/************************************************************************
*								Item::Item								*
*	This constructor is based upon user input. It will 	instantiate		*
*	an Item object.														*
************************************************************************/

/************************************************************************
*						ShoppingCart::ShoppingCart						*
*	This constructor is based upon user input. It will 	instantiate		*
*	a Shopping Cart object.												*
************************************************************************/
void ShoppingCart::addItemToCart(Item iCart) // this has to be a virtual function
	{	
		cart = iCart; 
	}

















