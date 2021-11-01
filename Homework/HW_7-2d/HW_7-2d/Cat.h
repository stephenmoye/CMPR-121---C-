// Cats.h - class specification

#include <iostream>
#include <string>

using namespace std;

class Cat
{
private:
	// private instance variables
	string name;
	int weight;
	string color;
public:
	Cat(); // default constructor
	~Cat(); // destructor 
	void setName(string name);
	void setWeight(int weight);
	void setColor(string color);
	void displayInfo();
	void meow();
};