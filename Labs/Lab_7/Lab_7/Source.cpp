//  Attached:   Lab_7
//
// =============================================================================
//  File:   Lab_7.pdf
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program asks the user for a length and a width and outputs
//   the area using set and get member functions
// 
// =============================================================================
#include "Rectangle.h"

// =============================================================================
// main
// =============================================================================
int main()
{
	double width;
	double length;
	double area;

	Rectangle tennisCourt;
	
	cout << "Enter the width of the court:  ";
	cin >> width;
	tennisCourt.setWidth(width);
	cout << "Enter the length of the court:  ";
	cin >> length;
	tennisCourt.setLength(length);

	cout << "\nThe width of the court is " << tennisCourt.getWidth() << " feet.\n";
	cout << "The length of the court is " << tennisCourt.getLength() << " feet.\n";
	cout << "The area of the court is " << tennisCourt.getArea(width, length) << " square feet.\n";

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



// === OUTPUT ==================================================================
// 
//Enter the width of the court : 60
//Enter the length of the court : 120
//
//The width of the court is 60 feet.
//The length of the court is 120 feet.
//The area of the court is 7200 square feet.
//
//C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_7\Debug\Lab_7.exe(process 43892) exited with code 0.
//To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//Press any key to close this window . . .
//
// =============================================================================