// Car.cpp

#include "Car.h"

int Car::carCount = 0;

Car::Car()
{
	carCount++;
	year = 0;
	price = 0;
}

Car::Car(int year, string model, float price)
{
	carCount++;
	this->year = year;
	this->model = model;
	this->price = price;
}
// ---------------------
Car::~Car() {
	carCount--;
}
// ---------------------
void Car::showCar()const
{
	cout << year << model << price;
}

int Car::getCarCount()const
{
	return carCount;
}