//  Attached:   HW_7-2d (HW_7-2d)
//
// =============================================================================
//  File:   HW_7-2d
// =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   This program asks the user to input the weight and color of 
//   3 cats, Fluffy, Tom, and Kitty. Then their info is displayed
//   to the screen and each cat meows, respectively.
// =============================================================================

#include "Cat.h"

// =============================================================================
// main
// =============================================================================
int main()
{
	// initialize variables
	string name = "";
	int weight = 0;
	string color = "";

	// Class instances
	Cat Fluffy;
	Cat Tom;
	Cat Kitty;

	// Set names of each Cat
	Fluffy.setName("Fluffy");
	Tom.setName("Tom");
	Kitty.setName("Kitty");

	// Fluffy info
	cout << "Describe Fluffy.  What does she weight?  ";
	cin >> weight;
	Fluffy.setWeight(weight);
	cout << "What color is she?  ";
	cin.ignore();
	getline(cin, color);
	Fluffy.setColor(color);
	cout << endl;

	// Tom info
	cout << "Describe Tom.  What does he weight?  ";
	cin >> weight;
	Tom.setWeight(weight);
	cout << "What color is he?  ";
	cin.ignore();
	getline(cin, color);
	Tom.setColor(color);
	cout << endl;

	// Kitty info
	cout << "Describe Kitty.  What does she weight?  ";
	cin >> weight;
	Kitty.setWeight(weight);
	cout << "What color is she?  ";
	cin.ignore();
	getline(cin, color);
	Kitty.setColor(color);
	cout << endl;

	// diplay all info of each Cat
	Fluffy.displayInfo();
	Tom.displayInfo();
	Kitty.displayInfo();
	cout << endl;

	// MEOW!
	Fluffy.meow();
	Tom.meow();
	Kitty.meow();

	return 0;
}
// =============================================================================
// end of main
// =============================================================================



// === OUTPUT ==================================================================
// 
//Describe Fluffy.What does she weight ? 4
//What color is she ? brown
//
//Describe Tom.What does he weight ? 9
//What color is he ? orange
//
//Describe Kitty.What does she weight ? 5
//What color is she ? white
//
//Fluffy weighs 4 pounds and is brown
//Tom weighs 9 pounds and is orange
//Kitty weighs 5 pounds and is white
//
//Fluffy says : MEOW!
//Tom says : MEOW!
//Kitty says : MEOW!
//
//C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_7 - 2d\Debug\HW_7 - 2d.exe(process 19028) exited with code 0.
//To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//Press any key to close this window . . .
// 
// =============================================================================