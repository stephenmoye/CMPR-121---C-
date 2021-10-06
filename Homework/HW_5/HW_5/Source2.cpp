//  Attached:   HW_5f (5d, 5e, and 5f)
//
// ===========================================================
//  File:   HW_5f
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program takes an input statement from user,
//   counts the vowels, and returns the count to the screen.
//
// ===========================================================

#include <iostream>
using namespace std;

int main();

int countVowels(char statement[], int index); // Function protoype
	
const int SIZE = 20;

// =============================================================================
// main
// =============================================================================
int main()
{
	char statement[SIZE] = "";
	cout << "Enter a statement:   \n";
	cin.getline(statement, SIZE);

	cout << "\nThere are " << countVowels(statement, 0) << " vowels in the statement.\n";

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//  countVowels
//  =============================================================================
//  this function takes the user input statement
//  and returns the count of vowels in statement
//
//  Input:
//      c-string statement and recursive index
//  Output:
//      returns the count of vowels in statement
//  =============================================================================
int countVowels(char statement [], int index)
{

	if (statement[index] == '\0')
	{
		return 0;
	}
	else if (tolower(statement[index]) == 'a' || 
			 tolower(statement[index]) == 'e' || 
			 tolower(statement[index]) == 'i' || 
			 tolower(statement[index]) == 'o' || 
			 tolower(statement[index]) == 'u')
	{
		return 1 + countVowels(statement, index + 1);
	}
	else
	{
		return countVowels(statement, index + 1);
	}

}
//  =============================================================================
//  end of countVowels
//  =============================================================================



//  =============================================================================
//   OUTPUT
//  =============================================================================
/*

Enter a statement:
Say it ain't so Joe

There are 7 vowels in the statement.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_5\Debug\HW_5.exe (process 26404) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/