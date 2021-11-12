#include "Sculpture.h"

Sculpture::Sculpture()
{
	string material = "";
}

Sculpture::Sculpture(string id, string title, string artist, string material, string genre, int year, double price)
{
	this->id = id;
	this->title = title;
	this->artist = artist;
	this->material = material;
	this->genre = genre;
	this->year = year;
	this->price = price;
}

Sculpture::~Sculpture(){}

void Sculpture::showArt()
{
	cout << "ID:  " << id << endl
		<< "Title:  " << title << endl
		<< "Artist: " << artist << endl
		<< "Material:  " << material << endl
		<< "Genre:  " << genre << endl
		<< "Year:  " << year << endl
		<< "Price:  $" << price << endl << endl;
}