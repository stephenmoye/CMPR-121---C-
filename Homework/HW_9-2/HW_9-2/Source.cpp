//  Attached: HW_9f-1.pdf, HW_9f-2
//
//  ==============================================
//  File: HW_9f-2.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program creates my car and your car
//   and compares the model and year to determine
//   if they are the same.
//   ==============================================

#include "Car.h"

bool areSame(Car& myCar, Car& yourCar);

int Car::carCount = 0;

int main()
{
	Car myCar;
	Car yourCar("Toyota", 2007);

	cout << myCar;
	cout << yourCar;

	myCar.setCar("Ford", 2002);
	//yourCar.setCar("Ford", 2002); // make areSame true

	cout << myCar;

	if (areSame(myCar, yourCar))
	{
		cout << "The two cars are the same model and year.\n\n";
	}
	else {
		cout << "The two cars are NOT the same model and year.\n\n";
	}

	cout << yourCar.getCount() << " cars have been declared.\n";

	return 0;
}


bool areSame(Car & myCar, Car & yourCar)
{
	if (myCar == yourCar)
	{
		return true;
	}
	else {
		return false;
	}
}


/*  ==============================================
//  OUTPUT
//  ==============================================
My Car
Model :
Year:   0

My Car
Model : Toyota
Year : 2007

My Car
Model : Ford
Year : 2002

The two cars are NOT the same model and year.

2 cars have been declared.

C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_9 - 2\Debug\HW_9 - 2.exe(process 48408) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//  ============================================ */

