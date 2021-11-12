#include "Painting.h"

Painting::Painting()
{
	string paintMedium = "";
}

Painting::Painting(string id, string title, string artist, string paintMedium, string genre, int year, double price)
{
	this->id = id;
	this->title = title;
	this->artist = artist;
	this->paintMedium = paintMedium;
	this->genre = genre;
	this->year = year;
	this->price = price;
}

Painting::~Painting(){}

void Painting::showArt()
{
	cout << "ID:  " << id << endl
		<< "Title:  " << title << endl
		<< "Artist: " << artist << endl
		<< "Paint Medium:  " << paintMedium << endl
		<< "Genre:  " << genre << endl
		<< "Year:  " << year << endl
		<< "Price:  $" << price << endl << endl;
}
