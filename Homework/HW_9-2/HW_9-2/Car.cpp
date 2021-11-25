#include "Car.h"

Car::Car()
{
	string model = "";
	int year = 0;
	carCount++;
}

Car::Car(string model, int year)
{
	this->model = model;
	this->year = year;
	carCount++;
}

Car::~Car(){}

void Car::setCar(string model, int year)
{
	this->model = model;
	this->year = year;
}

void Car::displayCar()
{
	cout << model << endl
		<< year << endl;
}

int Car::getCount() const
{
	return carCount;
}