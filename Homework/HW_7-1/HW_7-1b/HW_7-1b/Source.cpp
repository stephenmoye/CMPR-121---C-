//  Attached:   HW_7-1b (HW_7-1 a,b)
//
// =============================================================================
//  File:   HW_7-1b
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program sets and gets times for different clock type classes. Then
//   outputs the time after incrementing by 1 second.
// =============================================================================

#include "ClockType.h";

// =============================================================================
// main
// =============================================================================

int main()
{
	// Intances of ClockType class
	ClockType myClock;					// Calls the default constructor
	ClockType yourClock;				// Calls the default constructor
	ClockType myOtherClock(0, 0, 0);	// Calls the overloaded constructor

	myClock.setTime(23, 59, 59);
	yourClock.setTime(10, 0, 15);

	cout << "my clock time is:   "; 
	myClock.printTime();

	myClock.incrementSeconds(); // add one second
	cout << "my clock time is:   ";
	myClock.printTime();

	myClock.areTimesEqual();

	return 0;
}

// =============================================================================
// end of main
// =============================================================================



// === OUTPUT ==================================================================
// 
//my clock time is : 23 : 59 : 59
//my clock time is : 0 : 0 : 0
//
//C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_7 - 1\HW_7 - 1b\Debug\HW_7 - 1b.exe(process 6992) exited with code 0.
//To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//Press any key to close this window . . .
// 
// =============================================================================