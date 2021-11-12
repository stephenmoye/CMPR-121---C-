// Auto.cpp

#include "Auto.h";

Auto::Auto()
{
	convertible = false;
}

Auto::Auto(int id, int year, string model, float wholesale, bool convertible)
{
	this->id = id;
	this->year = year;
	this->model = model;
	this->wholesale = wholesale;
	this->convertible = convertible;
}

Auto::~Auto() {}

void Auto::setConvertible(bool convertible)
{

}

void Auto::displayVehicle()const		// overriding the base class function
{										// 
	cout << "ID: " << id << endl
		<< "Year: " << year << endl
		<< "Model: " << model << endl
		<< "Convertible: ";

	if (convertible == true)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}
	cout << "Wholesale price: $" << wholesale << endl << endl;
}