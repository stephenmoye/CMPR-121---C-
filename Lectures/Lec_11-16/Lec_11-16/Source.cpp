// Source.cpp

#include "Car.h"

void showCount();

int main()
{
	//Car friendsCar;
	Car myCar(2008, "Kia Rio", 3000);		// class instance
	Car yourCar(2015, "Nissan Senta", 6000);//
	char answer;
	
	cout << "Create another Car object (Y or N)?";
	cin >> answer;

	if (toupper(answer) == 'Y')
	{
		Car friendsCar;

		cout << "There are " << myCar.getCarCount() << " cars.\n\n";
	}


	return 0;
}


void showCount()
{
	cout << "There are " << Car::carCount() << "cars.\n";
}



	//cout << "My car:\n";
	//myCar.showCar();

	//cout << "Your car:\n";
	//yourCar.showCar();