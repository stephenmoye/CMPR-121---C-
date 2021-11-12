#include "Vehicle.h"

Vehicle::Vehicle()
{
	id = 0;
	year = 0;
	wholesale = 0;
}

Vehicle::Vehicle(int id, int year, string model, float wholesale)
{
	this->id = id;
	this->year = year;
	this->model = model;
	this->wholesale = wholesale;
}

Vehicle::~Vehicle(){}

void Vehicle::setId(int vehId)
{
	vehId = id;
}

void Vehicle::setYear(int vehYear)
{
	vehYear = year;
}

void Vehicle::setModel(string vehModel)
{
	vehModel = model;
}

void Vehicle::setWholesale(float wholesale)
{
	this->wholesale = wholesale;
}

int Vehicle::getYear()const
{
	return year;
}

void Vehicle::displayVehicle()const
{
	cout << "ID: " << id << endl
		<< "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Wholesale price: $" << wholesale << endl << endl;
}

float Vehicle::calcRetail()const
{
	return wholesale * 1.5;
}