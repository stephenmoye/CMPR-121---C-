#include "Art.h"

class Sculpture : public Art
{
private:
	string material;
public:
	Sculpture();
	Sculpture(string id, string title, string artist, string material, string genre, int year, double price);
	~Sculpture();
	void showArt();
};