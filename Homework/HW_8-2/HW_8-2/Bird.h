// Bird.h - derived class
#include "Animal.h"

class Bird : public Animal
{
private:
	string featherColor;
public:
	Bird();
	Bird(string name, double weight, string featherColor);
	~Bird();
	void showAnimal();
};