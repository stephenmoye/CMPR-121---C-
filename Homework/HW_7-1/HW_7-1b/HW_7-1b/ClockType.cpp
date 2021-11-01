#include "ClockType.h"

//---Default Constructor-------------------------------------------//
ClockType::ClockType() // default constructor (no params)
{
	hrs = 0;
	mins = 0;
	secs = 0;
}
//-----------------------------------------------------------------//

//---Overloaded Constructor----------------------------------------//
ClockType::ClockType(int hours, int minutes, int seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
//-----------------------------------------------------------------//

//---Destructor----------------------------------------------------//
ClockType::~ClockType() {}
//-----------------------------------------------------------------//

//---setTime function----------------------------------------------//
void ClockType::setTime(int hours, int minutes, int seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
//-----------------------------------------------------------------//

//---getTime function----------------------------------------------//
void ClockType::getTime(int &hours, int &minutes, int &seconds)
{
	hrs = hours;
	mins = minutes;
	secs = seconds;
}
//-----------------------------------------------------------------//

//---incrementSeconds function-------------------------------------//
void ClockType::incrementSeconds()
{
	if (secs >= 59)
	{
		secs = 0;
		incrementMinutes();
	}
	else {
		secs++;
	}
}
//-----------------------------------------------------------------//

//---incrementMinutes function-------------------------------------//
void ClockType::incrementMinutes()
{
	if (mins >= 59)
	{
		mins = 0;
		incrementHours();
	}
	else {
		mins++;
	}
}
//-----------------------------------------------------------------//

//---incrementHours function---------------------------------------//
void ClockType::incrementHours()
{
	if (hrs >= 23)
	{
		hrs = 0;
	}
	else {
		hrs++;
	}
}
//-----------------------------------------------------------------//

//---incrementSeconds function-------------------------------------//
bool ClockType::areTimesEqual()
{
	if ((hrs, mins, secs) == (0, 0, 0)) {
		return true;
	} else {
		return false;
	}
}
//-----------------------------------------------------------------//

//---printTime function------------------------------------------//
void ClockType::printTime()const
{
	cout << fixed;
	cout << setprecision(2);
	cout << hrs << ":" << mins << ":" << secs << endl; // format date
}
//-----------------------------------------------------------------//