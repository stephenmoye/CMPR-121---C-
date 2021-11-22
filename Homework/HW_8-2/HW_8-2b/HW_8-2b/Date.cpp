// Date.cpp
#include "Date.h"

Date::Date()
{
	int month = 0;
	int day = 0;
	int year = 0;
}
Date::Date(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}
Date::~Date(){}
void Date::setDate(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}

void Date::displayDate()
{
	cout << month << "/" << day << "/" << year << endl;
}