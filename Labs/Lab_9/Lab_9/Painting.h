#include "Art.h"

class Painting : public Art
{
private:
	string paintMedium;
public:
	Painting();
	Painting(string id, string title, string artist, string paintMedium, string genre, int year, double price);
	~Painting();
	void showArt();
};