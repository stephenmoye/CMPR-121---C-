//  Attached:   HW_2a, HW_2b, HW_2c, HW_2d
//
// ===========================================================
//  File:   HW_2d
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will ask the user
//   to enter an ID number to be searched,
//   then search the array to determine 
//   whether the ID is in it
//
// =========================================================== 

#include <iostream>

using namespace std;

const int SIZE = 5;

int getId();
void searchId(int, int[SIZE]);

// =============================================================================
// main
// =============================================================================
int main()
{
	
	int idNumbers[SIZE]{ 12345, 54321, 11223, 33211, 44411 };

	int idInput = getId();
	searchId(idInput, idNumbers);

	return 0;
}
// =============================================================================
// end of main
// =============================================================================  



//  =============================================================================
//  getId
//  =============================================================================
//  this function asks the user to enter an ID to be searched
// 
//  Input: 
//      none
//  Output: 
//      The input results are returned to main
//  =============================================================================
int getId()
{
	int idInput;
	cout << "Please enter an ID to be searched: ";
	cin >> idInput;

	return idInput;
}
//  =============================================================================
//  end of getId
//  =============================================================================



//  =============================================================================
//  searchId
//  =============================================================================
//  this function takes the idInput passed from main
//  and loops through each item in the idNumbers array
//  comparing it to idInput to search for a match
// 
//  Input: 
//      idInput, the ID from user input
//		idNumbers, an array, the list of IDs to search against
//  Output: 
//      If ID is found, a message is output with the array location
//      If not found, a message informs the user the ID is not in the array
//  =============================================================================
void searchId(int idInput, int idNumbers[SIZE])
{
	bool idFound;
	int searchItem = 0;

	while (searchItem <= SIZE)
	{
		if (idInput == idNumbers[searchItem])
		{
			idFound = true;
			cout << "Your ID " << idInput << " is located at position " << searchItem + 1 << " in the array." << endl;
			break;
		}
		else
		{
			idFound = false;
			searchItem++;
		}
	}

	if (idFound == false)
	{
		cout << "Your ID is not in the list." << endl;
	}
}
//  =============================================================================
//  end of searchId
//  =============================================================================



/* ================================== Output 1 ==================================
Please enter an ID to be searched: 12345
Your ID 12345 is located at position 1 in the array.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\HW_2d\Debug\HW_2d.exe (process 32864) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
==============================================================================

/* ================================== Output 2 ==================================
Please enter an ID to be searched: 44411
Your ID 44411 is located at position 5 in the array.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\HW_2d\Debug\HW_2d.exe (process 32864) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
============================================================================== */

/* ================================== Output 3 ==================================
Please enter an ID to be searched: 42069
Your ID is not in the list.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\HW_2d\Debug\HW_2d.exe (process 32864) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
============================================================================== */