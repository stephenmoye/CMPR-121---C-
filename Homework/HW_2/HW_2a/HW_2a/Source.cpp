//  Attached:   HW_2a, HW_2b, HW_2c, HW_2d
//
// ===========================================================
//  File:   HW_2a
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function prompts the user to enter 
//   5 test scores. The user then chooses between 
//   two display options, average, or display all scores.
// =========================================================== 

#include <iostream>
#include <iomanip>

using namespace std;

void getScores(double[]);
void showMenu();
char getChoice();
void displayResult(char, double[]);

const int SIZE = 5;

// =============================================================================
// main
// =============================================================================
int main()
{
	double testScores[SIZE];
	char choice;

	getScores(testScores);
	showMenu();
	choice = getChoice();
	displayResult(choice, testScores);

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//  getScores
//  =============================================================================
//	This function prompts the user to enter 5 test scores3 temperatures
// 
//  Input: 
//      testScores, an array with a size of 5 per SIZE const variable
//  Output: 
//      the user's 5 test scores are read and assigned to the testScores array
//  =============================================================================
void getScores(double testScores[SIZE])
{
	cout << "Enter 5 test scores: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> testScores[i];
	}
	system("cls"); // clear screen
}
//  =============================================================================
//  end of getScores
//  =============================================================================


//  =============================================================================
//  showMenu
//  =============================================================================
//	This function shows the user the score choices menu
// 
//  Input: 
//      none
//  Output: 
//      a and b choices to the screen
//  =============================================================================
void showMenu()
{
	cout << "A.)  Calculate the average of the test scores." << endl
		 << "B.)  Display all test scores" << endl;
}
//  =============================================================================
//  end of showMenu
//  =============================================================================



//  =============================================================================
//  getChoice
//  =============================================================================
//	This function receives the user's choice input
// 
//  Input: 
//      none
//  Output: 
//      return the user's choice to main(), as an uppercase char
//  =============================================================================
char getChoice()
{
	char choice;
	cout << "Enter your choice: ";
	cin >> choice;

	return toupper(choice);
}
//  =============================================================================
//  end of getChoice
//  =============================================================================



//  =============================================================================
//  displayResult
//  =============================================================================
//	This function receives the user's choice input and outputs the result 
//  based on the user choice
// 
//  Input: 
//      choice of the user for which menu option to execute
//		the testScores array filled with user's score data
//  Output: 
//      if A, calculate the average and output it
//      if B, list each score in the testScores array
//	    if other, output error
//  =============================================================================
void displayResult(char choice, double testScores[])
{

	if (choice == 'A')
	{
		double sum = 0;
		double average;

		for (int i = 0; i < SIZE; i++) {
			sum += testScores[i];
			average = sum / SIZE;
		}

		system("cls");

		cout << "The average is " << average << endl;
	}
	else if (choice == 'B')
	{
		for (int i = 0; i < SIZE; i++) {
			cout << testScores[i] << endl;
		}
	}
	else 
	{
		cout << "Invalid entry!";
	}
}
//  =============================================================================
//  end of displayResult
//  =============================================================================


/*  ================================= Output ====================================
* 
* Enter 5 test scores:
95
96
97
98
99

// Clear screen

A.)  Calculate the average of the test scores.
B.)  Display all test scores
Enter your choice: a

// Clear screen

The average is 97


////////
///OR///
////////

A.)  Calculate the average of the test scores.
B.)  Display all test scores
Enter your choice: B

95
96
97
98
99

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\New folder\HW_2a\Debug\HW_2a.exe (process 28144) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .


  ================================= Output ==================================== */
