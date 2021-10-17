//  Attached:   HW_6c (HW_6 a,b,c,d,e)
//
// =============================================================================
//  File:   HW_6c
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program opens a text file and outputs the 
//	 contents to the screen and results.txt and then
//	 asks the user for 3 more numbers which are appended
//   to the existing results.txt
// =============================================================================

#include <iostream>
#include <fstream>

using namespace std;

// =============================================================================
// main
// =============================================================================
int main35()
{
	int number;
	string resultsText = "";

	ifstream infile;
	ofstream outfile;

	infile.open("data.txt", ios::out); // file to open
	outfile.open("results.txt", ios::app);

	if (infile.fail()) // check to see if file opened successfully
	{
		cout << "Error opening file!\n"; // if the file does not open
		exit(1);
	}

	cout << "Here are the numbers in the file:\n";
	while (!infile.eof()) // read the file until end-of-file
	{
		infile >> number;
		outfile << number << endl;
		cout << number << endl;
	}

	cout << "\nEnter 3 more numbers:\n";

	for (int i = 0; i < 3; i++) // loop to get 3 more numbers
	{
		cin >> resultsText;
		outfile << resultsText << endl; // write to file
	}	

	cout << "The numbers have been written (appended) to results.txt.";

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

Enter 3 more numbers:
6
7
8
The numbers have been written (appended) to results.txt.
C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_6\Debug\HW_6.exe (process 33620) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/