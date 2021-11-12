// Auto.h -- derived class (child)

#include "Vehicle.h"

class Auto : public Vehicle // inheritance from Vehicle
{
private:
	bool convertible;
public:
	Auto();
	Auto(int id, int year, string model, float wholesale, bool convertible);
	~Auto();
	void setConvertible(bool convertible);
	void displayVehicle()const;
};