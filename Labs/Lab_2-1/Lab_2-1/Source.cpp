//  Attached:   Lab_2.1
//
// ===========================================================
//  File:   Lab_2-1.pdf (strings)
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will take in a users first and last name
//   and where they live and output it in a sentence. It 
//   will also check if first and last name are the same.
//
// =========================================================== 

#include <iostream>
#include <string>

using namespace std;

// =============================================================================
// main
// =============================================================================
int main()
{
	string firstName = "";
	string lastName = "";
	string fullName = "";
	string city = "";

	cout << "Enter your first name: ";
	getline(cin, firstName);

	cout << "Enter your last name: ";
	getline(cin, lastName);

	cout << "Enter the state you live in: ";
	getline(cin, city);

	fullName = firstName + " " + lastName;
	cout << "\nHi " << fullName << ". So you live in " << city << ".\n";
	cout << "Your first name has " << firstName.length() << " characters, \nand your last name has " << lastName.length() << " characters.\n\n";

	if (firstName == lastName)
	{
		cout << " Your first and last names are the same.\n\n";
	}
	else {
		cout << " Your first and last names are NOT the same.\n\n";
	}
	return 0;
}
// =============================================================================
// end of main
// =============================================================================  


/* ================================== Output ===================================
Enter your first name : Lee
Enter your last name : Lee
Enter the state you live in : California

Hi Lee Lee.So you live in California.
Your first name has 3 characters,
and your last name has 3 characters.

Your first and last names are the same.


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_2 - 1\Debug\Lab_2 - 1.exe(process 6784) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

================================================================================ */