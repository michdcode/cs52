// date.h is the class specification file
#ifndef DATE_H // include guard
#define DATE_H


class Date
{	
	private:
		int month, day, year;

	public:
	// constructor prototypes -first is default, second is overloaded
		Date();
		Date(int userMonth, int userDay, int userYear);

	// destructor prototype
		~Date();
	
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
#endif
