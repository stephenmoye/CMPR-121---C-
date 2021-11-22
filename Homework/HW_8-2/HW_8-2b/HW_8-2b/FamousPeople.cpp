// FamousPeople.cpp

#include "FamousPeople.h"

FamousPeople::FamousPeople()
{
	Date birthdate(0,0,0);
}
FamousPeople::FamousPeople(string name, string quote, Date birthdate)
{
	this->name = name;
	this->quote = quote;

}
FamousPeople::~FamousPeople(){}
void FamousPeople::setName(string name)
{
	this->name = name;
}
//===============================================//
void FamousPeople::setDate(int month, int day, int year)
{
	birthdate.setDate(month, day, year);
}

void FamousPeople::setQuote(string quote)
{
	this->quote = quote;
}

void FamousPeople::displayPerson()
{
	cout << "Name: ";
	cout << name << endl;
}

void FamousPeople::displayDate()
{
	cout << "Birth Date: ";
	birthdate.displayDate();
}

void FamousPeople::displayQuote()
{
	cout << "Enter the quotation:\n";
	cout << "\"" << quote << "\"\n\n";
}



