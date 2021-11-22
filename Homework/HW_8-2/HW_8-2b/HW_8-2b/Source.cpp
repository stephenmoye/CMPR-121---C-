//  Attached: HW_8-2a.pdf, HW_8-2b
//
//  ==============================================
//  File: HW_8-2b.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program asks the user to input the name, quote and date
//	 of 3 famous people. Then those values are displayed 
// 
//   ==============================================

#include "FamousPeople.h"

//  ==============================================
//  main
//  ==============================================
int main()
{
	string name;
	string quote;
	Date birthdate;

	int month;
	int day;
	int year;

	FamousPeople first;
	FamousPeople second;
	FamousPeople third;

	
	cout << "Enter the first famous person:   "; // Prompt user to enter name of famous person
	getline(cin, name);
	first.setName(name); // Read in the name and use the setName method to assign the name 
	cout << "\nEnter the quotation: \n";
	getline(cin, quote);
	first.setQuote(quote); // Prompt the user to enter the person’s quotation.
	cout << "\nEnter the birthdate: \nMonth:	"; // Prompt user to enter birthdate person
	cin >> month;
	cout << "Day:	";
	cin >> day;
	cout << "Year:	";
	cin >> year;
	first.setDate(month, day, year); // Read date and use setDate method to assign values

	// Do the same for the other two people
	cout << "\nEnter the second famous person:   ";
	cin.ignore();
	getline(cin, name);
	second.setName(name);
	cout << "\nEnter the quotation: \n";
	getline(cin, quote);
	second.setQuote(quote);
	cout << "\nEnter the birthdate: \nMonth:	";
	cin >> month;
	cout << "Day:	";
	cin >> day;
	cout << "Year:	";
	cin >> year;
	second.setDate(month, day, year);

	cout << "\nEnter the third famous person:   ";
	cin.ignore();
	getline(cin, name);
	third.setName(name);
	cout << "\nEnter the quotation: \n";
	getline(cin, quote);
	third.setQuote(quote);
	cout << "\nEnter the birthdate: \nMonth:	";
	cin >> month;
	cout << "Day:	";
	cin >> day;
	cout << "Year:	";
	cin >> year;
	third.setDate(month, day, year);

	system("cls"); // Clear the screen before displaying the people.

	cout << "\nHere are the famous people:\n\n";

	first.displayPerson(); // Use the displayPerson method to display the first famous person
	first.displayDate();
	first.displayQuote();
	// Output the other two famous people.  
	second.displayPerson();
	second.displayDate();
	second.displayQuote();
	
	third.displayPerson();
	third.displayDate();
	third.displayQuote();

	return 0;
}
//  ==============================================
//  end of main
//  ==============================================

/*  ==============================================
//  OUTPUT
//  ==============================================

Enter the first famous person:   DaVinci

Enter the quotation:
I have from an early age abjured the use of meat, and the time will come when men such as I will look upon the murder of animals as they now look upon the murder of men.

Enter the birthdate:
Month: 4
Day:    15
Year:   1452

Enter the second famous person:   Einstein

Enter the quotation:
The pioneers of a warless world are the
youth who refuse military service.

Enter the birthdate:
Month:  3
Day:    14
Year:   1879

Enter the third famous person:   Hitler

Enter the quotation:
What luck for the rulers that men do not think.

Enter the birthdate:
Month: 4
Day:    20
Year:   1889

~~~~ SCREEN CLEARS ~~~~

Here are the famous people:

Name: DaVinci
Birth Date: 4/15/1452
Enter the quotation:
"I have from an early age abjured the use of meat, and the time will come when men such as I will look upon the murder of animals as they now look upon the murder of men."

Name: Einstein
Birth Date: 3/14/1879
Enter the quotation:
"The pioneers of a warless world are the
youth who refuse military service."

Name: Hitler
Birth Date: 4/20/1889
Enter the quotation:
"What luck for the rulers that men do not think."

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_8-2\HW_8-2b\Debug\HW_8-2b.exe (process 16936) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/