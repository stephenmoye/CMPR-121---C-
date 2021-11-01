#include "Date.h"

//---Default Constructor-------------------------------------------//
Date::Date() // default constructor (no params)
{
	// init with default values
	month = 0;
	day = 0;
	year = 0;
}
//-----------------------------------------------------------------//
// 
//---Overloaded Constructor----------------------------------------//
Date::Date(int dateMonth, int dateDay, int dateYear)
{
	month = dateMonth;
	day = dateDay;
	year = dateYear;
}
//-----------------------------------------------------------------//

//---Destructor----------------------------------------------------//
Date::~Date() {}
//-----------------------------------------------------------------//

//---setDate function----------------------------------------------//
// set functions "mutator function"
void Date::setDate(int dateMonth, int dateDay, int dateYear)
{
	month = dateMonth;
	day = dateDay;
	year = dateYear;
}
//-----------------------------------------------------------------//

//---addDays function----------------------------------------------//
void Date::addDays(int days)
{

	for (int i = 0; i < days; i++) // loop to ensure that remainder is added
	{
		if (day > 30) // end of month
		{
			month++;
			day = 1;
		}
		if (month > 12) // end of year
		{
			month = 1;
			year++;
		}
		else {
			day++;
		}
	}
}
//-----------------------------------------------------------------//

//---displayDate function------------------------------------------//
void Date::displayDate()const // get functions "accessor functions"
{
	cout << month << "/" << day << "/" << year << endl; // format date
}
//-----------------------------------------------------------------//