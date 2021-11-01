//  Attached:   Lab_8
//
// =============================================================================
//  File:   Lab_8.pdf
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program outputs yourSong and anotherSong 
// =============================================================================

#include "Song.h"

int main()
{
	string title;
	string artist;

	// Class instances
	Song yourSong;
	Song anotherSong;

	// Set yourSong
	yourSong.setTitle("");
	yourSong.setArtist("");
	
	// set anotherSong
	anotherSong.setTitle("All of me");
	anotherSong.setArtist("Billie Holiday");
	
	cout << "Here are the songs:\n\n";
	cout << "Your song:\n";
	yourSong.displaySong();
	cout << "\n\nAnother song:\n";
	anotherSong.displaySong();

	// Prompt the user
	cout << "\n\nEnter information about your song:\n";
	cout << "Title:\t";
	getline(cin, title);
	yourSong.setTitle(title);
	cout << "Artist:\t";
	getline(cin, artist);
	yourSong.setArtist(artist);
	// Display user input song
	cout << "\nHere is your song (after the set functions):\n";
	yourSong.displaySong();

	return 0;
}


// === OUTPUT ==================================================================
//
//Here are the songs :
//
//Your song :
//Title:
//Artist:
//
//Another song :
//Title:  All of me
//Artist : Billie Holiday
//
//Enter information about your song :
//Title:  Like a Virgin
//Artist : Madonna
//
//Here is your song(after the set functions) :
//Title : Like a Virgin
//Artist : Madonna
// 
//	C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_8\Debug\Lab_8.exe(process 24592) exited with code 0.
//	To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//	Press any key to close this window . . .
// 
// =============================================================================