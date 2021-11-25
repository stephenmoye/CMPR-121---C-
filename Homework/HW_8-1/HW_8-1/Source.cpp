//  Attached: HW_8-1a.pdf, HW_8-1b
//
//  =============================================================================
//  File: HW_8-1b.pdf
//  =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//  =============================================================================

#include "Grad.h"
#include "UnderGrad.h"

int main()
{
	// declare two objects of Student type
	//Student s1; // default constructor.
	//Student s2(100, 12, "Tom P. Lee"); // overloaded constructor.

	//s1.displayRecord(); // s1 object calls its displayRecord() function
	//s2.displayRecord(); // s2 object calls its displayRecord() function

	// use the set functions to assign
	// these values to the s1 object
	//s1.setId(101);
	//s1.setName("John Lee Hooker");
	//s1.setUnits(15);

	//s1.displayRecord(); // s1 object calls its displayRecord() function again

	UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
	Grad grad(101, "Jim Jones", 12, "PHD");

	underGrad.displayRecord();
	grad.displayRecord();

	grad.setUnits(15);
	grad.displayRecord();


	return 0;
}



/*//  =============================================================================
====================================== OUTPUT =====================================

ID:     100
Name:   Tom Lee
Units:  9
Degree: Freshman

ID:     101
Name:   Jim Jones
Units:  12
Degree: PHD

ID:     101
Name:   Jim Jones
Units:  15
Degree: PHD


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_8-1\Debug\HW_8-1.exe (process 10340) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//  =============================================================================//*/