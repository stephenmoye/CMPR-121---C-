//  Attached:   HW_2a, HW_2b, HW_2c, HW_2d
//
// ===========================================================
//  File:   HW_2b
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will ask the user
//   for 12 numbers for the 2d array
//   then display a formatted output
//
// =========================================================== 

#include <iostream>
#include <iomanip>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void getData(int numArray[ROWS][COLS]);
void displayArray(int numArray[ROWS][COLS]);

// =============================================================================
// main
// =============================================================================
int main()
{
	int numArray[ROWS][COLS];
	getData(numArray);

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//  getData
//  =============================================================================
//  this function receives the array from main
//  prompts the user to input numbers to fill the array
//  and then passed those values to displayArray
// 
//  Input: 
//      numArray, a multidimensional array with rows and columns const int sizes
//  Output: 
//      The input results are passed to displayArray
//  =============================================================================
void getData(int numArray[][COLS])
{
	cout << endl << "Enter integers into the 2-Dimensional array:" << endl << endl;

	for (int i = 0; i < ROWS; i++)

	{

		for (int j = 0; j < COLS; j++)
		{
			cout << "Enter a number: ";
			cin >> numArray[i][j];
		}
	}
	system("cls");

	displayArray(numArray);
}
// =============================================================================
// end of getData
// =============================================================================



//  =============================================================================
//  displayArray
//  =============================================================================
//  this function takes in the array passed from getData
//  and loops through each row/col of the array
//  to output a formatted version of the array values
// 
//  Input: 
//      numArray, a multidimensional array with rows and columns const int sizes
//  Output: 
//      The data of the array formatted into rows and columns
//  =============================================================================
void displayArray(int numArray[][COLS])
{
	cout << "Here is the data in the 2-Dimensional array:" << endl << endl;

	// nested loop to output each value of the array

	// outer loop handles rows
	for (int i = 0; i < ROWS; i++)
	{
		// inner loop handles cols
		for (int j = 0; j < COLS; j++)
		{
			// output each iteration w/ fixed formatting
			cout << setw(6) << setprecision(3) << fixed << numArray[i][j];
		}

		cout << endl;
	}
}
// end of displayArray function
// =============================================================================



/*  ================================= Output ====================================


Enter integers into the 2 - Dimensional array:

Enter a number : 1
Enter a number : 45
Enter a number : 765
Enter a number : 6
Enter a number : 32
Enter a number : 45
Enter a number : 789
Enter a number : 343
Enter a number : 22
Enter a number : 64
Enter a number : 12
Enter a number : 555

Here is the data in the 2-Dimensional array:

	 1    45   765     6
	32    45   789   343
	22    64    12   555

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\HW_2b\Debug\HW_2b.exe (process 17512) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .



================================= Output ==================================== */