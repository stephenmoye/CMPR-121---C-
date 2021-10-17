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
//   This program 
//
// =============================================================================

#include "Cats.h"

// =============================================================================
// main
// =============================================================================
int main22()
{
	int number;

	ifstream infile;
	ofstream outfile;

	infile.open("data.txt"); // file to open
	outfile.open("results.txt");

	//infile >> number;
	//outfile << number;

	if (infile.fail()) // check to see if file opened successfully
	{
		cout << "Error opening file!\n"; // if the file does not open
		exit(1);
	}

	cout << "Here are the numbers in the file:\n";
	while (!infile.eof()) // read the file until end-of-file
	{
		infile >> number;
		cout << "\t" << number << endl;
	}

	outfile << "The data has been written to the file.";

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//   OUTPUT
//  =============================================================================
/*
 Here are the numbers in the file:
		3
		4
		5

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_6\Debug\HW_6.exe (process 28324) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/