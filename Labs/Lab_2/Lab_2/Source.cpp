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
// This function 
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
	int internatlSales = 0;
	int totalSales;

	for (int i = 0; i < 6; i++)
	{
		domesticSales += company[0][i];
		internatlSales += company[1][i];
	}

	totalSales = domesticSales + internatlSales;

	cout << "Domestic sales: $" << domesticSales << endl;
	cout << "International sales: $" << internatlSales << endl;
	cout << "Company sales: $" << totalSales << endl << endl;


	return 0;
}
