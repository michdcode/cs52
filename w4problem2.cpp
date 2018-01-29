// Michelle Dicks
// CS 52
// Assignment #4

#include <iostream>
#include <iomanip>
using namespace std;

class Date
{	
	private:
		int month, day, year;

	public:
		Date(int userMonth, int userDay, int userYear);
		// Mutator & Accessor function prototypes
		void setMonth(int iMonth);
		void setDay(int iDay);
		void setYear(int iYear);
		int getMonth() const;
		int getDay() const;
		int getYear() const;
		// Display function prototypes
		void showDateSlash();
		void showDateAmerican();
		void showDateEuropean();
};

/************************************************************************
*								Date::Date								*
*	This constructor is based upon user input. It will 					*
*	instantiate a Date object if there are three parameters given 		*
*	at instantiation.													*
************************************************************************/
Date::Date(int userMonth, int userDay, int userYear) 
	{
		setMonth(userMonth);
		setDay(userDay);
		setYear(userYear);
	}

/************************************************************************
*								Date::setMonth							*
*	The argument passed to the setMonth function is copied into the		*
*	member variable month.												*
************************************************************************/
void Date::setMonth(int iMonth)
	{	
		month = iMonth; 
	}

/************************************************************************
*								Date::setDay							*
*	The argument passed to the setDay function is copied into the		*
*	member variable day.												*
************************************************************************/
void Date::setDay(int iDay)
	{	
		day = iDay; 
	}

/************************************************************************
*								Date::setYear							*
*	The argument passed to the setYear function is copied into the		*
*	member variable year.												*
************************************************************************/
void Date::setYear(int iYear)
	{	
		year = iYear; 
	}

/************************************************************************
*								Date::getMonth							*
*	This function returns the value in member variable month.			*
************************************************************************/
int Date::getMonth() const
	{ 	
		return month; 
	}

/************************************************************************
*								Date::getDay							*
*	This function returns the value in member variable day.				*
************************************************************************/
int Date::getDay() const
	{	
		return day; 
	}

/************************************************************************
*								Date::getYear							*
*	This function returns the value in member variable year.			*
************************************************************************/
int Date::getYear() const 
	{	
		return year; 
	}

/************************************************************************
*						void Date::showDateSlash						*
*	This will display the month/day/year in numerical form using a		*
*   slash to separate each element. 									*
************************************************************************/
void Date::showDateSlash()
	{
		cout << endl; 
		cout << getMonth() << "/" << getDay() << "/" << getYear();
	}
	  
/************************************************************************
*						void Date::showDateAmerican						*
*	This will display the date in the American style, with the month	*
*   written out, then the day and then the year.						*
************************************************************************/
void Date::showDateAmerican()
	{
		int month; 
		cout << endl;
		month = getMonth();
		switch (month)
		{
			case 1: cout << "January ";
				break;
			case 2: cout << "February ";
				break;
			case 3: cout << "March ";
				break;
			case 4: cout << "April ";
				break;
			case 5: cout << "May ";
				break;
			case 6: cout << "June ";
				break;
			case 7: cout << "July ";
				break;
			case 8: cout << "August ";
				break;
			case 9: cout << "September ";
				break;
			case 10: cout << "October ";
				break;
			case 11: cout << "November ";
				break;
			case 12: cout << "December ";
				break;
			default: cout << "Invalid Month ";
		}
		cout << getDay() << ", ";
		cout << getYear();
	}
/************************************************************************
*						void Date::showDateEuropean						*
*	This will display the date in the Europeanstyle, with the day, then	*
*   the month written out, then the year.								*
************************************************************************/
void Date::showDateEuropean()
	{
		int month; 
		cout << endl;
		cout << getDay() << ". ";
		month = getMonth();
		switch (month)
		{
			case 1: cout << "January ";
				break;
			case 2: cout << "February ";
				break;
			case 3: cout << "March ";
				break;
			case 4: cout << "April ";
				break;
			case 5: cout << "May ";
				break;
			case 6: cout << "June ";
				break;
			case 7: cout << "July ";
				break;
			case 8: cout << "August ";
				break;
			case 9: cout << "September ";
				break;
			case 10: cout << "October ";
				break;
			case 11: cout << "November ";
				break;
			case 12: cout << "December ";
				break;
			default: cout << "Invalid Month ";
		}
		cout << getYear();
        cout << endl;
	}

//***********************main************************
int main()
{
	// declare variables; 
	int uMonth, uDay, uYear;

	// Get input from user
	cout << "Please enter the month number: ";
	cin >> uMonth;
    cout << endl;
	cout << "Please enter the day of the month: ";
	cin >> uDay;
    cout << endl;
	cout << "Please enter the year: ";
	cin >> uYear;

	// Store the user input into the date object
	Date oneDate(uMonth, uDay, uYear);

	// Call functions to display dates
	oneDate.showDateSlash(); 
	oneDate.showDateAmerican();
	oneDate.showDateEuropean();

	return 0; 
}