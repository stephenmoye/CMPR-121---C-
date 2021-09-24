//  Attached:   Lab 4
//
// ===========================================================
//  File:   Lab_4
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program asks the user for an input
//   of number, amount and paid status. Then
//   it display it as an invoice
//
// =========================================================== 

#include "Invoices.h" // inclue Invoice struct

void setInvoice(Invoice&, Invoice&);
void displayInvoice(Invoice&, Invoice&);



// =============================================================================
// main
// =============================================================================
int main()
{
	
	Invoice inv_1;
	Invoice inv_2;

	inv_1.invoiceNum = 0;
	inv_1.amt = 0.0;
	inv_1.paid = false;

	inv_2.invoiceNum = 0;
	inv_2.amt = 0.0;
	inv_2.paid = false;

	setInvoice(inv_1, inv_2);
	displayInvoice(inv_1, inv_2);
	return 0;
}
// =============================================================================
// end of main
// ============================================================================= 



//  =============================================================================
//  setInvoice
//  =============================================================================
//  this function asks the user to enter the invoice #, amount and paid status
//  
//  Input: 
//      The Invoice struct objects inv_1 and inv_2
//  Output: 
//      inv_1, inv_2 are updated with the user input, not returned 
//  =============================================================================
void setInvoice(Invoice& inv_1, Invoice& inv_2)
{
	// the vars that will hold paid input
	char paid_1;
	char paid_2;

	// invoice 1
	cout << "Enter the invoice:\n";
	cout << "INVOICE #:  ";
	cin >> inv_1.invoiceNum;
	cout << "AMOUNT:  ";
	cin >> inv_1.amt;
	cout << "PAID (y/n):  ";
	cin >> paid_1; // storing input in char, since inv_1.paid is a bool

	// invoice 2
	cout << "\nEnter the invoice:\n";
	cout << "INVOICE #:  ";
	cin >> inv_2.invoiceNum;
	cout << "AMOUNT:  ";
	cin >> inv_2.amt;
	cout << "PAID (y/n):  ";
	cin >> paid_2; // storing input in char, since inv_2.paid is a bool

	// updating .paid bool based on input
	if (toupper(paid_1) == 'Y')
	{
		inv_1.paid = true;
	}
	if (toupper(paid_2) == 'Y')
	{
		inv_2.paid = true;
	}

	system("cls"); // clear screen
}
//  =============================================================================
//  end of setInvoice
//  =============================================================================



//  =============================================================================
//  displayInvoice
//  =============================================================================
//  this function displays the user input from setInvoice as a formatted invoice
//  
//  Input: 
//      The Invoice struct objects inv_1 and inv_2
//  Output: 
//      the user input as a formatted invoice
//  =============================================================================
void displayInvoice(Invoice& inv_1, Invoice& inv_2)
{
	// invoice 1
	cout << "---- Invoice Summary ----\n\n";
	cout << "INVOICE #:  " << inv_1.invoiceNum << endl;
	cout << "AMOUNT:     " << inv_1.amt << endl;
	cout << "PAID:       ";
	if (inv_1.paid == false) // Output "Not" if paid is false
	{
		cout << "Not ";
	}
	cout << "Paid " << endl << endl; // Output "Paid" if paid is true

	// invoice 2
	cout << "---- Invoice Summary ----\n\n";
	cout << "INVOICE #:  " << inv_2.invoiceNum << endl;
	cout << "AMOUNT:     " << inv_2.amt << endl;
	cout << "PAID:       ";
	if (inv_2.paid == false)
	{
		cout << "Not "; // Output "Not" if paid is false
	}
	cout << "Paid " << endl; // Output "Paid" if paid is true
}
//  =============================================================================
//  end of displayInvoice
//  =============================================================================



/* ================================ Output ==================================
Enter the invoice:
INVOICE #:  1000
AMOUNT:  220.33
PAID (y/n):  y

Enter the invoice:
INVOICE #:  1001
AMOUNT:  123.75
PAID (y/n):  n

~~clear screen~

---- Invoice Summary ----

INVOICE #:  1000
AMOUNT:     220.33
PAID:       Paid

---- Invoice Summary ----

INVOICE #:  1001
AMOUNT:     123.75
PAID:       Not Paid

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_4\Debug\Lab_4.exe (process 31240) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

============================================================================ */