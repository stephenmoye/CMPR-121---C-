//  Attached: HW_9f-1.pdf, HW_9f-2
//
//  ==============================================
//  File: HW_9f-1.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program outputs differnt comparisions
//   of dogs on screen. Overloaded operators are
//	 created to handle each case.
//   ==============================================

#include "Dog.h"

int main()
{
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);

	if (myDog >= 2)			// Overload the  >=  operator
		cout << "The dog is at least 2 years old\n\n";
	else
		cout << "The dog is less than 2 years old.\n\n";

	if (yourDog < myDog)	// Overload the  <  operator
		cout << "Your dog weighs less than my dog.\n\n";
	else
		cout << "Your dog does not weigh less than my dog.\n\n";

	if (myDog == yourDog)	// Overload the  ==  operator
		cout << "They have the same name.\n\n";
	else
		cout << "They do not have the same name.\n\n";

	cout << yourDog << endl; // Overload the  <<  operator 

	return 0;
}

/*  ==============================================
//  OUTPUT
//  ==============================================
The dog is at least 2 years old

Your dog weighs less than my dog.

They do not have the same name.

NAME:   Jack
WEIGHT : 4.5 pounds
AGE : 3 years old.

C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_9\Debug\HW_9.exe(process 22808) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//  ============================================ */