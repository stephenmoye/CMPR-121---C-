//  Attached:   HW_6d (HW_6 a,b,c,d,e)
//
// =============================================================================
//  File:   HW_6d
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program takes an input from the user for 3 cats and their age
//   then writes the data to a .bin file in binary format.
// =============================================================================

#include "Cats.h"

// =============================================================================
// main
// =============================================================================
int mainD()
{
	Cats cat;
	int catCount = 0;

	ofstream outfile;
	outfile.open("critters.bin", ios::binary | ios::out);
	if (outfile.fail()) // check to see if file opened successfully
	{
		cout << "Error writing to file.\n"; // if the file has errors
		exit(1);
	}

	cout << "Enter 3 cat records.\n";

	while (catCount < 3)
	{
		cout << "Enter information about a cat:\n";
		cout << "NAME:  ";
		cin.getline(cat.name, SIZE);
		// write() char to binary
		outfile.write(cat.name, sizeof(cat.name));

		cout << "AGE:  ";
		cin >> cat.age;
		// typecast int to write() to binary
		outfile.write(reinterpret_cast<char*>(&cat.age), sizeof(cat.age));
		
		cin.ignore(); // ignore unwanted characters

		catCount++;
	}

	cout << "Record written to file. ";
	
	outfile.close(); // close file

	return 0;
}

// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//   OUTPUT
//  =============================================================================
/*
Enter 3 cat records.
Enter information about a cat:
NAME:  Tom
AGE:  5
Enter information about a cat:
NAME:  Fluffy
AGE:  3
Enter information about a cat:
NAME:  Sweet Pea
AGE:  2
Record written to file.
C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_6\Debug\HW_6.exe (process 32348) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/