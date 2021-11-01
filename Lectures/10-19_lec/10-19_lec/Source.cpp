#include "Song.h"

int main()
{
	int songID;
	string songTitle;
	float songPrice;

	// 2 instances (objects) of 'Song' class 
	Song bluesSong(100, "Irene", 1.29);
	Song rockSong;

	cout << "Here is a blues song:\n";
	bluesSong.displaySong(); // object calling function

	cout << "Here is a rock song:\n";
	rockSong.displaySong(); // object calling function

	cout << "Enter information about a rock n roll song.\n";
	cout << "ID:   ";
	cin >> songID;
	rockSong.setID(songID);
	cout << "Title:   ";
	cin.ignore();
	getline(cin, songTitle);
	rockSong.setTitle(songTitle);
	cout << "Price:   ";
	cin >> songPrice;
	rockSong.setPrice(songPrice);

	cout << "Here is a rock song after the \"set\" functions. \n";
	rockSong.displaySong();

	cout << "The price of " << rockSong.getTitle() << " is $" << rockSong.getPrice() << ".\n\n";


	return 0;
}