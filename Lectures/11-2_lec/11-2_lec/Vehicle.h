// Vehicle.h -- base class (parent)
#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

// use pragma once
// #ifndef VEHICLE_H	// if not defined
// #define VEHICLE_H	// define it
// 
// This is an abstract class because it has at least 1 pure virtual function
// An abstract class cannot be instantiated
class Vehicle
{
protected:
	int id;
	int year;
	string model;
	float wholesale;
public:
	Vehicle();
	Vehicle(int id, int year, string model, float wholesale);
	~Vehicle();
	void setId(int vehId);
	void setYear(int vehYear);
	void setModel(string vehModel);
	void setWholesale(float wholesale);
	int getYear()const;
	void displayVehicle()const;  // Pure virtual function requires all derived classes have the function
	virtual float calcRetail()const;		// virtual prevents static bind, analyze object being passed until runtime
};
// #endif // !VEHICLE_H