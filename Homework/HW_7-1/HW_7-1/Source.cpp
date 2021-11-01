//  Attached:   HW_7-1a (HW_7-1 a,b)
//
// =============================================================================
//  File:   HW_7-1a
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program stores today's date, asks the user when payday is
//   and adds a week to it. Then outputs all 3 dates
// =============================================================================

#include "Date.h";

// =============================================================================
// main
// =============================================================================

int main()
{
	int dateDay;
	int dateMonth;
	int dateYear;

	// Intances of Date class
	Date today(10, 24, 2021);
	Date payDay;

	cout << "What date is payday?\n";
	cout << "Month(MM): ";
	cin >> dateMonth;
	cout << "Day(DD): ";
	cin >> dateDay;
	cout << "Year(YYYY): ";
	cin >> dateYear;
	payDay.setDate(dateMonth, dateDay, dateYear);

	cout << "Today's date: "; 
	today.displayDate();	// Output today's date

	cout << "Pay day: ";
	payDay.displayDate();	// Output the date of pay day
	
	cout << "Next pay day: ";
	payDay.addDays(7);		// Add one week (7 days) to payDay object
	payDay.displayDate();	// Output the date of next week’s pay day


	return 0;
}

// =============================================================================
// end of main
// =============================================================================



// === OUTPUT ==================================================================
//
//What date is payday?
//Month(MM) : 11
//Day(DD) : 30
//Year(YYYY) : 2021
//Today's date: 10/24/2021
//Pay day : 11/30/2021
//Next pay day : 12/7/2021
//
//C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_7-1\Debug\HW_7-1.exe(process 26324) exited with code 0.
//To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//Press any key to close this window . . .
// 
// 
// =============================================================================