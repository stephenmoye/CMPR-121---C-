// Truck.h

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int loadCapacity;
public:
	Truck();
	Truck(int id, int year, string model, float wholesale, int loadCapacity);
	~Truck();
	void setLoadCapacity(int loadCapacity);
	void displayVehicle()const;
	virtual float calcRetail()const;


};