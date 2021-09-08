// Attached: Lab #2
//
// =============================================================================
// File: Lab_2.pdf
// =============================================================================
// Programmer: Stephen Moye
// Class: CMPR 121 Tuesday
// Instructor: Dennis Rainey
//
// Description:
// This program adds up 6 months worth of sales data
// and displays domestic, international and company totals 
// 
// =============================================================================
#include <iostream>
#include <iomanip>

using namespace std;

// =============================================================================
// main
// =============================================================================
int main()
{
	int company[2][6] = {{ 75000, 30200, 67800, 45000, 60000, 67500 },{ 40000, 75000, 64000, 32600, 47800, 39000 }};

	int domesticSales = 0;
	int internationalSales = 0;
	int totalSales = 0;

	for (int i = 0; i < 6; i++)
	{
		domesticSales += company[0][i];
		internationalSales += company[1][i];
	}

	totalSales = domesticSales + internationalSales;

	cout << "Domestic sales: $" << domesticSales << endl;
	cout << "International sales: $" << internationalSales << endl;
	cout << "Company sales: $" << totalSales << endl << endl;


	return 0;
}
// =============================================================================
// end of main
// =============================================================================



/*============================ Output ============================== 
Domestic sales: $345500
International sales: $298400
Company sales: $643900


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_2\Debug\Lab_2.exe (process 17560) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/