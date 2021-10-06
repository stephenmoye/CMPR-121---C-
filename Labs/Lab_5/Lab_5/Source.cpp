//  Attached:   Lab_5
//
// ===========================================================
//  File:   Lab_5
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will take the enum Roster and output
//   a menu to choose a student's birthday. The user input
//   displays the corresponding date.
// 
// ===========================================================

#include <iostream>
using namespace std;

enum Roster { TOM = 1, SHARON, BILL, TERESA, JOHN };

// =============================================================================
// main
// =============================================================================
int main()
{
	int getBday;
	
	cout << "This program will give you a student's birthday.\n\n"
		 << "1.) = Tom\n" << "2.) = Sharon\n" << "3.) = Bill\n" 
		 << "4.) = Teresa\n" << "5.) = John\n\n";
	
	cout << "Whose birthday do you want to know?  ";
	cin >> getBday;

	switch (getBday)
	{
	case 1:
		cout << "\nTom's birthday is January 3.";
		break;
	case 2:
		cout << "\nSharon's birthday is April 22.";
		break;
	case 3:
		cout << "\nBill's birthday is May 19";
		break;
	case 4:
		cout << "\nTeresa's birthday is July 2.";
		break;
	case 5:
		cout << "\nJohn's birthday is June 17.";
		break;
	default:
		cout << "\nInvalid selection.";
		break;
	}
}
// =============================================================================
// end of main
// ============================================================================= 



// =============================================================================
// OUTPUT
// ============================================================================= 
/*
This program will give you a student's birthday.

1.) = Tom
2.) = Sharon
3.) = Bill
4.) = Teresa
5.) = John

Whose birthday do you want to know?  1

Tom's birthday is January 3.
C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_5\Debug\Lab_5.exe (process 36820) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/