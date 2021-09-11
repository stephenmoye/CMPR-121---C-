//  Attached:   HW_2a, HW_2b, HW_2c, HW_2d
//
// ===========================================================
//  File:   HW_2c
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will read the grades
//   of students from an external txt file
//   an then display them in various ways
//
// =========================================================== 

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int ROWS = 5;
const int COLS = 3;

void getGrades(char [ROWS][COLS]);
void displayGrades(char [ROWS][COLS]);
void displayGPA(char[ROWS][COLS]);
void displaySubGPA(char grades[ROWS][COLS]);

// =============================================================================
// main
// =============================================================================
int main()
{
	char grades[ROWS][COLS];
	getGrades(grades);
	displayGrades(grades);
	displayGPA(grades);
	displaySubGPA(grades);

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



//  =============================================================================
//  getGrades
//  =============================================================================
//  this function reads the contents of a text file line by line
//  and stores the data in a 2D array
// 
//  Input: grades, an empty, 5 by 3, 2D array
//      
//  Output: grades, filled with letter grades from the test file
//      
//  =============================================================================
void getGrades(char grades[ROWS][COLS])
{

	ifstream fileIn;

	fileIn.open("C:/Users/Steve/Desktop/School/Computer Science/CMPR121/Homework/HW_2/HW_2c/HW_2c/grades.txt");

	if (fileIn.fail())
	{
		cout << "Error: cannot open file. \n";
		exit(1);
	}


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			fileIn >> grades[i][j];
		}
	}
}
// =============================================================================
// end of getData
// =============================================================================



//  =============================================================================
//  displayGrades
//  =============================================================================
//  this function takes the grades from the 2D array and 
//  displays them in a formatted table
// 
//  Input: grades, a 2D array filled with grades data
//      
//  Output: a formatted table displaying letter grades for each subject/student
//      
//  =============================================================================
void displayGrades(char grades[ROWS][COLS])
{
	cout << "All Grades" << endl 
		 << "Student    " << "English   " << "History   " << "Math" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		cout << "#" << i+1;

		for (int j = 0; j < COLS; j++)
		{
			cout << setw(10) << fixed << grades[i][j];
		}

		cout << endl;
	}
}
// =============================================================================
// end of displayGrades function
// =============================================================================



//  =============================================================================
//  displayGPA
//  =============================================================================
//  this function takes the letter grades from the 2D array
//  converts them, and displays the average GPA number for each student
// 
//  Input: grades, a 2D array filled with grades data
//      
//  Output: a formatted table containing the average GPA for each student
//      
//  =============================================================================
void displayGPA(char grades[ROWS][COLS])
{

	cout << "\nStudent GPAs" << endl
		 << "Student" << endl;

	for (int i = 0; i < ROWS; i++)
	{
		float sum = 0;
		float avg = 0;
		cout << "#" << i + 1 << "\t";

		for (int j = 0; j < COLS; j++)
		{
			switch (grades[i][j]) {
			case 'A':
				sum += 4;
					break;
			case 'B':
				sum += 3;
					break;
			case 'C':
				sum += 2;
					break;
			case 'D':
				sum += 1;
					break;
			default:
				break;
			}
		}
		avg = sum / COLS;
		cout << setw(7) << setprecision(2) << fixed << avg;

		cout << endl;
	}
}
// =============================================================================
// end of displayGPA function
// =============================================================================



//  =============================================================================
//  displaySubGPA
//  =============================================================================
//  this function takes the letter grades from the 2D array
//  converts them to numbers, and displays the average GPA number for each subject
// 
//  Input: grades, a 2D array filled with grades data
//      
//  Output: the GPA average for each subject
//      
//  =============================================================================
void displaySubGPA(char grades[ROWS][COLS])
{

	cout << "\nAverage GPA by Subject" << endl
	<< "English   " << "History   " << "Math" << endl;

	for (int i = 0; i < COLS; i++)
	{
		float sum = 0;
		float avg = 0;

		for (int j = 0; j < ROWS; j++)
		{
			switch (grades[j][i]) {
			case 'A':
				sum += 4;
				break;
			case 'B':
				sum += 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			default:
				break;
			}
		}
		avg = sum / ROWS;
		cout << setw(10) << setprecision(2) << fixed << left << avg;
	}
	cout << endl;
}
// =============================================================================
// end of displayGPA function
// =============================================================================



/*  ================================= Output ====================================

All Grades
Student    English   History   Math
#1         A         A         B
#2         C         C         F
#3         C         D         B
#4         B         A         C
#5         B         A         B

Student GPAs
Student
#1         3.67
#2         1.33
#3         2.00
#4         3.00
#5         3.33

Average GPA by Subject
English   History   Math
2.80      3.00      2.20

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_2\HW_2c\Debug\HW_2c.exe (process 24724) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

=============================================================================== */