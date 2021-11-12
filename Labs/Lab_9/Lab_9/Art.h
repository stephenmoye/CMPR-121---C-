#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Art
{
protected:
	string id;
	string title;
	string artist;
	string genre;
	int year;
	double price;
public:
	Art();
	Art(string id, string title, string artist, string genre, int year, double price);
	~Art();
	virtual void showArt();
};
