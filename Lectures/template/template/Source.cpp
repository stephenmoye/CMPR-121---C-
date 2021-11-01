//  Attached:   Lab #1
//
//  =============================================================================
//  File:   Lab_1
//  =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function prompts the user to enter 
//   temperatures in three cities and outputs the average
//  =============================================================================

#include <iostream>
using namespace std;

//struct Person
//{
//	int id;
//	char name[20] = "Tom Lee";
//};


void showLetters(char letter);

int main()
{
	char letter = 'A';
	showLetters(letter);

	return 0;
}


void showLetters(char letter)
{
	if (letter > 'C')
		return;
	showLetters(letter + 1);

	cout << letter << '\t';
}

//  =============================================================================
//  end of main
//  =============================================================================
