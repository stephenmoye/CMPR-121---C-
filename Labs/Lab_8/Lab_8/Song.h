// Song.h - class specification
#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
	// instance variables
	string title;
	string artist;
public: // 4 functions
	Song();	// default constructor (no params)
	Song(string title, string artist); // overloaded
	~Song(); // destructor
	void setTitle(string title);
	void setArtist(string artist);
	void displaySong()const;
};