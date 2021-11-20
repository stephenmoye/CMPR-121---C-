//  Attached: HW_8-2a.pdf, HW_8-2b
//
//  ==============================================
//  File: HW_8-2a.pdf
//  ==============================================

//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//  ==============================================
#include "Mammal.h"
#include "Bird.h"

int main()
{
	Bird bird("pelican", 8.5, "gray");
	Mammal cow("dairy cow", 500, "black and white");

	bird.showAnimal();
	cow.showAnimal();

	return 0;
}
//===============================================//
Animal::Animal()
{
	name = "";
	weight = 0;
}
Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}
Animal::~Animal(){};
//===============================================//
Mammal::Mammal()
{
	hairColor = "";
}
Mammal::Mammal(string name, double weight, string hairColor)
{
	this->name = name;
	this->weight = weight;
	this->hairColor = hairColor;
}
Mammal::~Mammal() {};
void Mammal::showAnimal()
{
	cout << "Mammals are vertebrates in the Mammalia class.\n"
		<< "This " << hairColor << " " << name
		<< " weighs " << weight << " pounds.\n\n";
}
//===============================================//
Bird::Bird()
{
	featherColor = "";
}
Bird::Bird(string name, double weight, string featherColor)
{
	this->name = name;
	this->weight = weight;
	this->featherColor = featherColor;
}
Bird::~Bird() {};
void Bird::showAnimal()
{
	cout << "Birds are vertebrates in the Aves class.\n"
		<< "This " << name << "has " << featherColor
		<< " feathers and weighs " << weight << " pounds.\n\n";
}

/*=================================== OUTPUT =====================================

Birds are vertebrates in the Aves class.
This pelicanhas gray feathers and weighs 8.5 pounds.

Mammals are vertebrates in the Mammalia class.
This black and white dairy cow weighs 500 pounds.


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_8-2\Debug\HW_8-2.exe (process 1892) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//  ==========================================================================//*/