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
//   This program takes a linked list of box records 
//   from user input and displays them on the screen.
//   From there, the user can choose to delete a box
//   or exit.
// 
// =========================================================== 

#include <iostream>
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

typedef Box* ptrType;

bool getBoxes(ptrType& head);
void displayBoxes(const ptrType head);
void deleteBox(Box*& head);



// =============================================================================
// main
// =============================================================================
int main()
{
	Box* head = nullptr;
	char answer;

	do {
		system("cls");	// clear screen

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

		deleteBox(head);

		cout << "\nDo again Y/N?  ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;
}
// =============================================================================
// end of main
// ============================================================================= 



//  =============================================================================
//  getBoxes
//  =============================================================================
//  this function prompts the user to enter data for a box object
// 
//  Input: 
//      The Box struct object ptrType by reference
//  Output: 
//      returns a true/false value, depending on if user wishes to repeat
//  =============================================================================
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
//  =============================================================================
//  end of getBoxes
//  =============================================================================



//  =============================================================================
//  deleteBox
//  =============================================================================
//  this function prompts the user to choose an ID to delete
// 
//  Input: 
//      The Box struct object pointer by reference and list head
//  Output: 
//      Box struct object address is updated with new list sans deleted box
//  =============================================================================
void deleteBox(Box*& head)
{
	Box* lead = head;
	Box* follow = head;
	int delId;

	// Check that list is not empty
	if (head == nullptr)
	{
		return;
	}
	cout << "Enter the ID of the box to be deleted:  ";
	cin >> delId;
	while (lead->id != delId && lead->next != nullptr)
	{
		follow = lead;
		lead = lead->next;
	}
	// Check to see if it's the first node
	if (lead == head)
	{
		// Delete the first node, but first move head to the next node.
		if (lead->id == delId)
		{
			head = head->next;
			delete lead;
		}
		else
		{
			cout << lead->id << " is not in the list.\n\n";
		}
	}
	// Check to see if it's the last node
	else if (lead->next == nullptr)
	{
		// Check to see if it's the last node
		if (lead->id == delId)
		{
			follow->next = lead->next;
			delete lead;
		}
		else
		{
			cout << "ID #" << lead->id << " is not in the list.\n\n";
		}
	}
	// Therefore it's in the list (but not the first or last)
	else
	{
		follow->next = lead->next;
		delete lead;
	}
	displayBoxes(head);

}
//  =============================================================================
//  end of deleteBox
//  =============================================================================



//  =============================================================================
//  displayBoxes
//  =============================================================================
//  this function displays the formatted linked list of boxes
// 
//  Input: 
//      The Box struct object ptrType and list head as a const
//  Output: 
//      The formatted linked list of boxes to the screen
// 
//  =============================================================================
void displayBoxes(const ptrType head)
{
	system("cls");
	if (head == NULL)
	{
		cout << "List is empty.\n";
		return;
	}
	ptrType temp = head;

	cout << fixed << showpoint << setprecision(2);
	cout << "Types of boxes:\n\n";
	cout << "ID#" << setw(10) << "Width" << setw(10) << "Height" << setw(10) << "Length\n";
	cout << "---------------------------------\n";

	while (temp != NULL)
	{
		cout << temp->id;
		cout << setw(10) << temp->width;
		cout << setw(10) << temp->height;
		cout << setw(10) << temp->length << endl;

		temp = temp->next;
	}
}
//  =============================================================================
//  end of displayBoxes
//  =============================================================================

/* OUTPUT:						  ------ Screen Clears ------
Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit) :

ID:  100
width:   3.25
height:   2.50
length:   3.50

ID:  101
width:   4.00
height:   8.50
length:   6.5

ID:  102
width:   3.50
height:   5.00
length:   7.75

ID:  103
width:   2.75
height:   3.75
length:   9.00

ID:  -1

Would you like to see the list of boxes (Y/N)?   y

~~ screen clear ~~

ID#     Width    Height   Length
---------------------------------
103      2.75      3.75    9.00
102      3.50      5.00      7.75
101      4.00      8.50      6.50
100      3.25      2.50      3.50

Enter the ID of the box to be deleted: 101

~~ screen clear ~~

ID#     Width    Height   Length
---------------------------------
103      2.75      3.75      9.00
102      3.50      5.00      7.75
100      3.25      2.50      3.50

Do again Y/N?  n


*/