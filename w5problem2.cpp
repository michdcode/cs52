// Michelle Dicks
// CS 52
// Assignment #4

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Ingredient
{
	private:
		string description;
	public:
		Ingredient(string uDescription)
		{
			setDescription(uDescription);
		}
	// Mutator & Accessor functions -- inline because they are short
	void setDescription(string uDescription) { description = uDescription; }
	string getDescription() { return description; }
};

class TomatoSauce:public Ingredient
{
	private:
		string description;
	public:
		// Constructor adds pageCount 
		TomatoSauce(string uDesc): Ingredient(uDesc) {}
		// Mutator & Accessor functions -- inline because they are short
		string getDescription() { return description; }
};

class Cheese:public Ingredient
{
	private:
		string description;
	public:
		// Constructor adds pageCount 
		Cheese(string usDesc): Ingredient(usDesc) {}
		// Mutator & Accessor functions -- inline because they are short
		string getDescription() { return description; }
};

class Dough:public Ingredient
{
	private:
		string description;
	public:
		// Constructor adds pageCount 
		Dough(string useDesc): Ingredient(useDesc) {}
		// Mutator & Accessor functions -- inline because they are short
		string getDescription() { return description; }
};

class Pepperoni:public Ingredient
{
	private:
		string description;
	public:
		// Constructor adds pageCount 
		Pepperoni(string userDesc): Ingredient(userDesc) {}
		// Mutator & Accessor functions -- inline because they are short
		string getDescription() { return description; }
};

class Pizza
{
	private:
		Ingredient *myOrder
	public:
		Pizza(int numIngredients)
		{
			order = new Ingredient[numIngredients]
		} 
};

class PizzaFactory
{
	public:
		virtual Pizza* bake() const = 0;
};

class CheesePizzaFactory : public PizzaFactory
{
	public:
		virtual Pizza* bake() const
		{
			Pizza myPizza;
			Dough wheat("wheat");
			TomatoSauce red("tomato");
			Cheese mozz("Mozzarella");
		}

};

class PepperoniPizzaFactory : public PizzaFactory
{
	public:
		virtual Pizza* bake() const
		{
			Pizza myPizza;
			Dough wheat("wheat");
			TomatoSauce red("tomato");
			Cheese mozz("Mozzarella");
			Pepperoni meat("Pepperoni"); 
		}

};

int main()
{
	char choice;
	cout << "Would you like a pepperoni or cheese pizza (c/p)? ";
	cin >> choice;
	PizzaFactory* factory;
	if (choice == 'p')
	{
	factory = new PepperoniPizzaFactory();
	}
	else
	{
	factory = new CheesePizzaFactory();
	}
	Pizza* pizza = factory->create();
	pizza->listIngredients();
	delete pizza;
	delete factory;
	return 0;
}