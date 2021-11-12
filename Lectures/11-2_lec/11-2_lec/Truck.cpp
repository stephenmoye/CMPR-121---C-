// Truck.cpp

#include "Truck.h"

Truck::Truck()
{
	loadCapacity = 0;
}

Truck::Truck(int id, int year, string model, float wholesale, int loadCapacity) : Vehicle(id, year, model, wholesale)
{
	this->loadCapacity = loadCapacity;

}

Truck::~Truck(){}

void Truck::setLoadCapacity(int loadCapacity)
{
	this->loadCapacity = loadCapacity;
}

void Truck::displayVehicle()const
{
	cout << "ID: " << id << endl
		<< "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Load capacity: " << loadCapacity << endl
		<< "Wholesale price: $" << wholesale << endl << endl;
}

float Truck::calcRetail()const
{
	return wholesale * 1.7;
}