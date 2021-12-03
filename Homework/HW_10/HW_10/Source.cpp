//  Attached: HW_10a.pdf, HW_10b.pdf, HW_10c.pdf, HW_10d.pdf
//
//  ==============================================
//  File: HW_10a.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program uses the "max" template function.
//	 It returns the greater of two values.
//   ==============================================
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int mainA()
{
	cout << "The greater value of 1 and 2 = " << max(1, 2) << endl;
	cout << "The greater value of 2 and 1 = " << max(2, 1) << endl;
	cout << "The greater value of 'a' and 'z' = " << max('a', 'z') << endl;
	cout << "The greater value of 3.14 and 2.72 is " << max(3.14, 2.72) << endl;
	// string does not seem to work, always prints the first entry
	cout << "The greater value of Hello and World is " << max("Hello", "World"); 

	return 0;
}

/* ==== OUTPUT =============================================
The greater value of 1 and 2 = 2
The greater value of 2 and 1 = 2
The greater value of 'a' and 'z' = z
The greater value of 3.14 and 2.72 is 3.14
The greater value of Hello and World is Hello
C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_10\Debug\HW_10.exe (process 43876) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .


//========================================================*/