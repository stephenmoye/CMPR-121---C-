//  Attached:   HW_6e (HW_6 a,b,c,d,e)
//
// =============================================================================
//  File:   HW_6e
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program takes an input from the user for 3 cats and their age
//   then writes the data to a .bin file in binary format. Then, a 4th
//   cat object is input and all cats name and ages are read to the screen.
//
// =============================================================================

#include "Cats.h"

// =============================================================================
// main
// =============================================================================
int main()
{
	Cats cat;
	int catInput = 0;
	int catOutput = 0;

	fstream outfile;
	outfile.open("critters.bin", ios::binary | ios::out);
	if (outfile.fail()) // check to see if file opened successfully
	{
		cout << "Error writing to file.\n"; // if the file errors
		exit(1);
	}

	cout << "Enter 3 cat records.\n";
	
	while (catInput < 3) // Prompt user for 3 Cats
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

		catInput++;
	}
	cout << "Record written to file. \n\n";
	outfile.close();

	outfile.open("critters.bin", ios::binary | ios::out | ios::app); // append extra cat
	// One more cat...
	cout << "Enter one more cat:\n";
	cout << "NAME:  ";
	cin.getline(cat.name, SIZE);
	// write() char to binary
	outfile.write(cat.name, sizeof(cat.name));

	cout << "AGE:  ";
	cin >> cat.age;
	// typecast int to write() to binary
	outfile.write(reinterpret_cast<char*>(&cat.age), sizeof(cat.age));

	cin.ignore(); // ignore unwanted characters
	outfile.close();

	// Output list of all cats
	outfile.open("critters.bin", ios::in);

	cout << "\nHere is a list of all cats:\n";
	//cout << sizeof(cat.age) << sizeof(cat.name);
	outfile.seekg(sizeof(cat.name), ios::beg); // move get pointer to beginning of file


	while (catOutput < 4)
	{
		outfile.read(reinterpret_cast<char*>(&cat.age), sizeof(cat.age));
		outfile.read(cat.name, sizeof(cat.name));
		cout << setw(10) << left;

		cout << cat.name << cat.age << endl;

		catOutput++;
	}

	outfile.close();

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
Enter information about a cat :
NAME:  Tom
AGE : 5
Enter information about a cat :
NAME:  Fluffy
AGE : 3
Enter information about a cat :
NAME:  Sweet Pea
AGE : 2
Record written to file.

Enter one more cat :
NAME:  Jasmin
AGE : 4

Here is a list of all cats :
Tom       5
Fluffy    3
Sweet Pea 2
Jasmin    4

C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_6\Debug\HW_6.exe(process 32100) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/