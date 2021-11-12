#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Art
{
private:
	string id;
	string title;
	string artist;
	string genre;
	int year;
	double price;
public:
	Art();
	~Art();
	virtual void showArt();
};
