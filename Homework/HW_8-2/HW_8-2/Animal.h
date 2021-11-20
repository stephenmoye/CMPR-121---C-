// Animal.h - class spec
#pragma once

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string name;
	double weight;
public:
	Animal();
	Animal(string name, double weight);
	~Animal();
};