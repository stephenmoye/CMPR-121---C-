/*/  Attached:   HW_5f (5d, 5e, and 5f)
//
// ===========================================================
//  File:   HW_5e
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program recursively displays all 
//   odd numbers in reverse from 20 to 0;
// 
// =========================================================== 

#include <iostream>
using namespace std;

void showEvens(int); // Function protoype

// =============================================================================
// main
// =============================================================================
int main()
{
	int nums = 20;

	cout << "Here are all odd numbers from 20 to 0:\n\n";
	showEvens(nums);
	cout << "\n";
	return 0;
}
// =============================================================================
// end of main
// ============================================================================= 



//  =============================================================================
//  showEvens
//  =============================================================================
//  this function recursively outputs odd numbers within a range (20)
// 
//  Input: 
//      nums, an integer to track recursive iterations
//  Output: 
//      outputs the odd results to the screen
//  =============================================================================
void showEvens(int nums)
{
	if (nums >= 0)
	{
		if (nums % 2 != 0) // modulus to determine even number
		{
			cout << nums << "   ";
		}
		showEvens(nums - 1);
	}
}
//  =============================================================================
//  end of showEvens
//  =============================================================================



//  =============================================================================
//   OUTPUT 
//  =============================================================================
/*

Here are all odd numbers from 20 to 0:

19   17   15   13   11   9   7   5   3   1

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_5\Debug\HW_5.exe (process 30132) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/