// Date.cpp is the Date clas implementation file. 
#include "date.h"

/************************************************************************
*								Date::Date								*
*	This is the default constructor. It will instantiate a Date 	 	*
*	object if there are no parameters given at instantiation.			*
************************************************************************/
Date::Date() //default
	{
		month = 0;
		day = 0;
		year = 0;
	} 

/************************************************************************
*								Date::Date								*
*	This overloaded constructor is based upon user input. It will 		*
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
*								Date::~Date								*
*	This is the destructor. It will free up memory for a Date object. 	*
************************************************************************/
Date::~Date() //default

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
int getDay() const
	{	
		return day; 
	}

/************************************************************************
*								Date::getYear							*
*	This function returns the value in member variable year.			*
************************************************************************/
int getYear() const 
	{	
		return year; 
	}

/************************************************************************
*						void Date::showDateSlash						*
*	This will display the month/day/year in numerical form using a		*
*   slash to separate each element. 									*
************************************************************************/
void Date::showDateSlash();
	cout << endl; 
	cout << getMonth() << "/" << getDate() << "/" << getYear();  

/************************************************************************
*						void Date::showDateAmerican						*
*	This will display the date in the American style, with the month	*
*   written out, then the day and then the year.						*
************************************************************************/
void showDateAmerican();
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
	cout << getDay() << " ";
	cout << getYear();

/************************************************************************
*						void Date::showDateEuropean						*
*	This will display the date in the Europeanstyle, with the day, then	*
*   the month written out, then the year.								*
************************************************************************/
void showDateEuropean();
	int month; 
	cout << endl;
	cout << getDay() << " ";
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
