// Michelle Dicks
// CS 52
// Assignment #1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Initialize variables
	const int VIP = 120, PREMIUM = 80, REGULAR = 40;
	const float TAX_RATE = 9.25; 
	int vipTix, premiumTix, regularTix;
	float salesTax, totalCost, displayTax, vipTotal, premiumTotal, regularTotal, subtotal;
	char p = 37;

	// Obtain ticket quantity by category 
	cout << "How many tickets would you like to order?" << endl;
	cout << "VIP Tickets ($" << VIP << "): ";
	cin >> vipTix;
	cout << "Premium Tickets ($" << PREMIUM << "): ";
	cin >> premiumTix;
	cout << "Regular Tickets ($" << REGULAR << "): ";
	cin >> regularTix;

	// Calculate totals
	vipTotal = vipTix * VIP;
	premiumTotal = premiumTix * PREMIUM;
	regularTotal = regularTix * REGULAR;
	subtotal = (vipTotal + premiumTotal + regularTotal);
	salesTax = (subtotal * TAX_RATE)/100;
	totalCost = subtotal + salesTax;
	

	// Display invoice
	cout << endl;
	cout << "Invoice:" << endl;
	cout << left << setw(14) << "VIP:"
		 << right << "$" << setw(4) << VIP << " x " << vipTix << " = $" << setw(6) 
		 << fixed << showpoint << setprecision(2) << vipTotal << endl;
	cout << left << setw(14) << "Premium:"
		 << right << "$" << setw(4) << PREMIUM << " x " << premiumTix << " = $" << setw(6)
		 << fixed << showpoint << setprecision(2) << premiumTotal << endl;
	cout << left << setw(14) << "Regular:"
		 << right << "$" << setw(4) << REGULAR << " x " << regularTix <<  " = $" << setw(6)
		 << fixed << showpoint << setprecision(2) << regularTotal << endl;
	cout << left << setw(14) << "Sales Tax:"
		 << right << TAX_RATE << p << setw(8) << " = $" << setw(6)
		 << fixed << showpoint << setprecision(2) << salesTax << endl;
    cout << "------------------------------------" << endl;
	cout << left << setw(14) << "Total Price:"
		 << right << setw(13) <<"$" << fixed << showpoint << setprecision(2) << totalCost << endl;

return 0; 
}