#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	string model;
	int year = 0;
	static int carCount;
public:
	Car();
	Car(string model, int year);
	~Car();
	void setCar(string model, int year);
	int getCount() const;
	void displayCar();
	friend bool areSame(Car&, Car&);
	friend ostream& operator <<(ostream& stream, Car& car)  // Overload the  <<  operator 
	{
		stream << "My Car\n" << 
			"Model:	" << car.model << endl
			<< "Year:	" << car.year << endl << endl;
		return stream;
	}
	bool operator == (Car& car) // Overload the  ==  operator
	{
		if (year = car.year && model == car.model)
			return true;
		else
			return false;
	}
};
