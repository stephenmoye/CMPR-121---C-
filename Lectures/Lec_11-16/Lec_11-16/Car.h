// Car.h - class spec

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car
{
private:	// instance variables
	static int carCount;
	int year;
	string model;
	float price;
public:
	Car();
	Car(int year, string model, float price);
	~Car();
	void showCar()const;
	int getCarCount()const;
};