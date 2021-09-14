//  Attached:   Lab_2.2
//
// ===========================================================
//  File:   Lab_2-2.pdf (c_strings)
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
	char firstName[20];
	char lastName[20];
	char fullName[40];
	char city[30];

	cout << "Enter your first name:  ";
	cin.getline(firstName, 20);

	cout << "Enter your last name:  ";
	cin.getline(lastName, 20);

	cout << "Enter the state you live in:  ";
	cin.getline(city, 30);

	strcpy_s(fullName, firstName);
	strcat_s(fullName, " ");
	strcat_s(fullName, lastName);

	cout << "\nHi " << fullName << ". " << "So you live in " << city << ".\n";
	cout << "Your first name has " << strlen(firstName) << " characters,\n";
	cout << "and your last name has " << strlen(lastName) << " characters.\n\n";

	if (strcmp(firstName, lastName) == 0) {
		cout << "Your first and last names are the same.\n\n";
	}
	else
	{
		cout << "Your first and last names are different.\n\n";
	}

	return 0;
}
// =============================================================================
// end of main
// =============================================================================  


/* ================================== Output ===================================
Enter your first name:  Thomas
Enter your last name:  Lee
Enter the state you live in:  California

Hi Thomas Lee. So you live in California.
Your first name has 6 characters,
and your last name has 3 characters.

Your first and last names are different.


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_2-2\Debug\Lab_2-2.exe (process 41292) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
================================================================================ */

/* ================================== Output 2 =================================
Enter your first name : Tom
Enter your last name : Tom
Enter the state you live in : Montana

Hi Tom Tom.So you live in Montana.
Your first name has 3 characters,
and your last name has 3 characters.

Your first and last names are the same.


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_2 - 2\Debug\Lab_2 - 2.exe(process 19096) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
================================================================================ */