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
		Item(string uTitle, string uDescription, double uPrice) 
		{
			setTitle(uTitle);
			setDescription(uDescription);
			setPrice(uPrice);
		}
		// Mutator & Accessor functions -- inline because they are short
		void setTitle(string uTitle) { title = uTitle; }
		void setDescription(string uDescription) { description = uDescription; }
		void setPrice(double uPrice) { price = uPrice; }
		string getTitle() { return title; }
		string getDescription() { return description; }
		double getPrice() { return price; }
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
};

class ShoppingCart
{
	private:
		vector<Item> cart;
	public:
		ShoppingCart(Item item1, Item item2, Item item3)
		{
			addItemToCart(item1);
            addItemToCart(item2);
            addItemToCart(item3);
		}
		void addItemToCart(Item tempItem) { cart.push_back(tempItem); }
		vector<Item> getCart(); 
};

class Customer
{
	private:
		int ID;
		string firstName, lastName;
		ShoppingCart *customerCart; // ptr to a ShoppingCart object
	public:
		Customer(int uID, string uFirstName, string uLastName)
		{
			setID(uID);
			setFirstName(uFirstName);
			setLastName(uLastName);
		}
		// Mutator & Accessor functions -- inline because they are short
		void setID(int uID) { ID = uID; }
		void setFirstName(string uFirstName) { firstName = uFirstName; }
		void setLastName(string uLastName) { lastName = uLastName; }
		// void setShoppingCart(ShoppingCart *basket) { *customerCart = *basket; } 
		int getID() {return ID; }
		string getFirstName() {return firstName; }
		string getLastName() {return lastName; }
};
/************************************************************************
*						ShoppingCart::getCart							*
*	Display all items in Shopping cart.									*
************************************************************************/
vector<Item> ShoppingCart::getCart()
	{
		for (int num = 0; num < cart.size(); num ++)
		{
			
            cout << endl; 
            cout << "Item number: " << (num + 1) << endl;
			cout << cart[num].getTitle();
			cout << endl; 
			cout << cart[num].getDescription();
			cout << endl;
			cout << cart[num].getPrice();
		}
	}

int main()
{
	// Initialize variables
	string aFirstName, aLastName, aTitle, aDescription;
	int aID, atype;
	double aPrice, aPageCount, aLength, aTrackCount;

	// Create a customer
	Customer jane(101, "Jane", "Doe");
	
	// Create one item of each type & add to customer's shopping cart
	Book janesBook("Astrophysics for People in a Hurry", "Nonfiction", 11.37, 224.0);
	Movie janesMovie("Guardians of the Galaxy2", "Action", 12.19, 2.15);
	CD janesCD("Evolve", "Imagine Dragons", 9.99, 11.0);	
	ShoppingCart janesItems(janesBook, janesMovie, janesCD); 
	janesItems.getCart();
	return 0;
}








