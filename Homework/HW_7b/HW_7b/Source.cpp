//  Attached:   HW_7-2c (HW_7-2c)
//
// =============================================================================
//  File:   HW_7-2c
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program asks the user for 3 Presidents, their # and a quote.
//   This data is stored in class data members and then displayed to the screen
// =============================================================================

#include "Presidents.h"

// =============================================================================
// main
// =============================================================================
int main()
{
	int number = 0;
	string name;
	string quote;

	// 3 President class instances
	Presidents first;
	Presidents second;
	Presidents third;

	// First President
	cout << "\nEnter the first president's number:   ";
	cin >> number;
	first.setNumber(number);
	cout << "Enter his name:   ";
	cin.ignore();
	getline(cin, name);
	first.setName(name);
	cout << "Enter his quote:   ";
	getline(cin, quote);
	first.setQuote(quote);

	// Second President
	cout << "\nEnter the second president's number:   ";
	cin >> number;
	second.setNumber(number);
	cout << "Enter his name:   ";
	cin.ignore();
	getline(cin, name);
	second.setName(name);
	cout << "Enter his quote:   ";
	getline(cin, quote);
	second.setQuote(quote);

	// Third President
	cout << "\nEnter the third president's number:   ";
	cin >> number;
	third.setNumber(number);
	cout << "Enter his name:   ";
	cin.ignore();
	getline(cin, name);
	third.setName(name);
	cout << "Enter his quote:   ";
	getline(cin, quote);
	third.setQuote(quote);

	// All president class objects output to screen
	cout << "\nThe presidents are:\n";
	first.displayPresidents();
	second.displayPresidents();
	third.displayPresidents();
	
	return 0;
}
// =============================================================================
// end of main
// =============================================================================



// === OUTPUT ==================================================================
//
//Enter the first president's number:   37
//Enter his name : Richard Nixon
//Enter his quote : I am not a crook.
// 
//Enter the second president's number : 45
//Enter his name : Donald Trump
//Enter his quote : Is our country still spending money on the GLOBAL WARMING HOAX ?
// 
//Enter the third president's number : 42
//Enter his name : Bill Clinton
//Enter his quote : I did not have sexual relations with that woman.
// 
//The presidents are :
//Richard Nixon, 37 president, said :
//	"I am not a crook."
// Donald Trump, 45 president, said :
//	"Is our country still spending money on the GLOBAL WARMING HOAX?"
// Bill Clinton, 42 president, said :
//	"I did not have sexual relations with that woman."
// 
//	C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_7b\Debug\HW_7 - 2.exe(process 76) exited with code 0.
//	To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//	Press any key to close this window . . .
// 
// =============================================================================