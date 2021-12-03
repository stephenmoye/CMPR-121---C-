//  Attached: HW_10a.pdf, HW_10b.pdf, HW_10c.pdf, HW_10d.pdf
//
//  ==============================================
//  File: HW_10c.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program takes in 5 employee hours & wage
//	 into respective vector, then outputs them
//   ==============================================

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(NUM_EMPLOYEES);		// 1.
	vector<double> wage(NUM_EMPLOYEES);		// 2.

	cout << "Enter hours worked and hourly wage of each employee:\n\n";

	for (int i = 0; i < hours.size(); i++)	// 3.
	{
		cout << "Hours for Employee #" << i + 1 << ":  ";
		cin >> hours[i];
		cout << "Wage for Employee #" << i + 1 << ":  ";
		cin >> wage[i];
	}
	system("cls");

	cout << fixed << setprecision(2);

	cout << "Gross pay for each employee:\n\n";

	for (int i = 0; i < wage.size(); i++)	// 4.
	{
		cout << setw(11) << "Employee #" << i + 1 << setw(5) << "$"
			<< setw(7) << wage[i] << endl;
	}

	cout << "\nEmployee #1 hours = " << hours.front();	// 5.

	cout << "\nEmployee #5 hours = " << hours.back();	// 5.

	return 0;


}


/* ==== OUTPUT =============================================

Enter hours worked and hourly wage of each employee:

Hours for Employee #1:  12
Wage for Employee #1:  543
Hours for Employee #2:  42
Wage for Employee #2:  855
Hours for Employee #3:  14
Wage for Employee #3:  602
Hours for Employee #4:  31
Wage for Employee #4:  772
Hours for Employee #5:  8
Wage for Employee #5:  304

~~ Clear Screen ~~

Gross pay for each employee:

 Employee #1    $ 543.00
 Employee #2    $ 855.00
 Employee #3    $ 602.00
 Employee #4    $ 772.00
 Employee #5    $ 304.00

Employee #1 hours = 12
Employee #5 hours = 8

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_10\Debug\HW_10.exe (process 48688) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//========================================================*/