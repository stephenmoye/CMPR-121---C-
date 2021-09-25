//  Attached:   HW_4f
//
// ===========================================================
//  File:   HW_4f
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program will 
// 
// 
//
// =========================================================== 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Box
{
	int id;
	float width;
	float height;
	float length;
	Box* next;
};

typedef Box* ptrType; ///////////

bool getBoxes(ptrType& head);
void displayBoxes(const ptrType head);
void deleteBox(const ptrType head);


int main()
{
	char answer;
	int delId;

	do {
		system("cls");	// FOR REPL    cout << "\e[2J\e[0;0H";

		ptrType head = NULL;

		cout << "Enter the specifications of different types of boxes.\n" <<
			"Include the number of boxes presently in inventory. \n" << 
			"Enter boxes - (-1 to quit) :\n\n";

		bool doAgain = true;

		do {
			doAgain = getBoxes(head);
		} while (doAgain == true);

		cout << "Would you like to see the list of boxes (Y/N)?   ";
		cin >> answer;
		if (toupper(answer) == 'Y')
			displayBoxes(head);

		cout << "Enter the ID of the box to be deleted:  ";
		cin >> delId;
		if (delId > 0)
			deleteBox(head);

		cout << "Do again Y/N?  ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;
}

// ==== getBoxes function ==================================
bool getBoxes(ptrType& head)
{
	ptrType temp = new(Box);
	bool doAgain = true;
	int idNum = 0;

	cout << "ID:  ";
	cin >> idNum;

	if (idNum == -1)
		doAgain = false;

	else
	{
		temp->id = idNum;
		cin.ignore();
		cout << "width:   ";
		cin >> temp->width;
		cout << "height:   ";
		cin >> temp->height;
		cout << "length:   ";
		cin >> temp->length;
		cout << endl;

		doAgain = true;

		temp->next = head;

		head = temp;
	}
	return doAgain;
}
// =============================================================

void deleteBox(const ptrType head)
{

}

// ==== displayBoxes function ================================
void displayBoxes(const ptrType head)
{
	system("cls");
	if (head == NULL)
	{
		cout << "List is empty.\n";
		return;
	}
	ptrType temp = head;

	while (temp != NULL)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "ID#" << setw(10) << "Width" << setw(10) << "Height" << setw(10) << "Length\n";
		cout <<				"---------------------------------\n";
		cout << temp->id;
		cout << setw(10) << temp->width;
		cout << setw(10) << temp->height;
		cout << setw(10) << temp->length;
		cout << endl << endl;
		
		temp = temp->next;
	}
}
// =============================================================

/* OUTPUT:						  ------ Screen Clears ------
Enter a student record (-1 to quit):	     ID#:               101
		 Name:        Pamela Lee
	 ID:  100 	 Address:    200 Elm Street
   Name:  Tom Lee	    City:         Santa Ana
Address:  100 Main Street	   State:                CA
   City:  Anaheim	     Zip:             94321
  State:  CA	     GPA:              4.00
	Zip:  91234
	GPA:  3.3	     ID#:               100
		Name:           Tom Lee
	 ID:  101	 Address:   100 Main Street
   Name:  Pamela Lee	    City:           Anaheim
Address:  200 Elm Street	   State:                CA
   City:  Santa Ana 	     Zip:             91234
  State:  CA	     GPA:              3.30
	Zip:  94321
	GPA:  4.0	Do again Y/N?  N   

	 ID:  -1
 Display all records Y / N ? Y
*/