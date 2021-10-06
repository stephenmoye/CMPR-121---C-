/*/  Attached:   HW_5f (5d, 5e, and 5f)
//
// ===========================================================
//  File:   HW_5d
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program recursively displays all 
//   even numbers from 1 to 20;
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
	int nums = 0;

	cout << "Here are all even numbers from 1 to 20:\n\n";
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
//  this function recursively outputs even numbers within a range (20)
// 
//  Input: 
//      nums, an integer to track recursive iterations
//  Output: 
//      outputs the even results to the screen
//  =============================================================================
void showEvens(int nums)
{
	if (nums <= 20)
	{
		if (nums % 2 == 0) // modulus to determine even number
		{
			cout << nums << "   ";
		}
		showEvens(nums + 1);
	}
}
//  =============================================================================
//  end of showEvens
//  =============================================================================



//  =============================================================================
//   OUTPUT 
//  =============================================================================
/*

Here are all even numbers from 1 to 20:

0   2   4   6   8   10   12   14   16   18   20

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_5\Debug\HW_5.exe (process 18744) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/
