// Song.h - class specification
#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
	// 3 instance variables
	int id;
	string title;
	float price;
public: // 4 functions
	Song();	// default constructor (no params)
	Song(int songID, string songTitle, float songPrice); // overloaded
	~Song(); // destructor /// called when outside of scope
	void displaySong()const;
	void setID(int songID);
	void setTitle(string songTitle);
	void setPrice(float songPrice);
	float getPrice()const;
	string getTitle()const;
};