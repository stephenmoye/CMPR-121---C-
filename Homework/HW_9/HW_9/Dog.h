// Dog.h - class spec

#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
	string name;
	float weight;
	int age;
public:
	Dog(string name, float weight, int age);
	~Dog();
	void displayDog();

	bool operator >= (int num) // Overload the  >=  operator
	{
		if (age >= num)
			return true;
		else
			return false;
	}
	bool operator < (Dog & dog) // Overload the  <  operator
	{
		if (weight < dog.weight)
			return true;
		else
			return false;
	}
	bool operator == (Dog & dog) // Overload the  ==  operator
	{
		if (name == dog.name)
			return true;
		else
			return false;
	}

	friend ostream& operator <<(ostream& stream, Dog& dog)  // Overload the  <<  operator 
	{
		stream << "NAME:   " << dog.name << endl
			<< "WEIGHT:   " << dog.weight << " pounds\n"
			<< "AGE:   " << dog.age << " years old.";
		return stream;
	}
};

Dog::Dog(string name, float weight, int age)
{
	this->name = name;
	this->weight = weight;
	this->age = age;
}

Dog::~Dog(){}

void Dog::displayDog()
{
	cout << "NAME:	" << name << endl
		<< "WEIGHT:	" << weight << " pounds\n"
		<< "AGE:	" << age << " years old.";
}