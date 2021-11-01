// Song.cpp

#include "Song.h"

Song::Song() // default constructor (no params)
{
	// init with default values
	id = 0;
	title = ""; // already done by string class
	price = 0.00;
}
//-----------------------------------------------------------------//
Song::Song(int songID, string songTitle, float songPrice)
{
	id = songID;
	title = songTitle;
	price = songPrice;
}
//-----------------------------------------------------------------//
Song::~Song(){}
//-----------------------------------------------------------------//
// set functions "mutator function"
void Song::setID(int songID)
{
	id = songID;
}
//-----------------------------------------------------------------//
void Song::setTitle(string songTitle)
{
	title = songTitle;
}
//-----------------------------------------------------------------//
void Song::setPrice(float songPrice)
{
	price = songPrice;
}
//-----------------------------------------------------------------//
// get functions "accessor functions"
void Song::displaySong()const
{
	cout << "ID:   " << id << endl
		<< "Title:   " << title << endl
		<< "Price:   " << price << endl << endl;
}
//-----------------------------------------------------------------//
float Song::getPrice()const
{
	return price; // just returns something
}
//-----------------------------------------------------------------//
string Song::getTitle()const 
{
	return title;
}
//-----------------------------------------------------------------//