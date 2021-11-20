// Mammal.h - derived class

#include "Animal.h"

class Mammal : public Animal
{
private:
	string hairColor;
public:
	Mammal();
	Mammal(string name, double weight, string hairColor);
	~Mammal();
	void showAnimal();
};