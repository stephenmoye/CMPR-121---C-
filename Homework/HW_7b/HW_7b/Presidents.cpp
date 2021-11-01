// Presidents.cpp

#include "Presidents.h"

//---Default Constructor-------------------------------------------//
Presidents::Presidents() // default constructor
{
	// default values
	number = 0;
	name = "";
	quote = "";
}
//-----------------------------------------------------------------//

//---Destructor----------------------------------------------------//
Presidents::~Presidents() {}
//-----------------------------------------------------------------//

//---setNumber function--------------------------------------------//
void Presidents::setNumber(int number)
{
	this->number = number;
}
//-----------------------------------------------------------------//

//---setName function----------------------------------------------//
void Presidents::setName(string name)
{
	this->name = name;
}
//-----------------------------------------------------------------//

//---setQuote function---------------------------------------------//
void Presidents::setQuote(string quote)
{
	this->quote = quote;
}
//-----------------------------------------------------------------//

//---displayPresidents function------------------------------------//
void Presidents::displayPresidents()
{
	cout << name << "," << number << " president, said:\n\t\"" << quote << "\"\n";
}
//-----------------------------------------------------------------//
