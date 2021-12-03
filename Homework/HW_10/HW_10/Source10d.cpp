//  Attached: HW_10a.pdf, HW_10b.pdf, HW_10c.pdf, HW_10d.pdf
//
//  ==============================================
//  File: HW_10d.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This takes a word into a list and then
//	 reads out each letter to identify palendromes.
//   ==============================================

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<char>characters;
	string word;
	bool diff = false;

	cout << "Enter a word:	";
	getline(cin, word);						// The word is read using getline().  

	for (int i = 0; word[i] != '\0'; i++)	// loop stops when the null character ‘\0’ is encountered
	{
		characters.push_back(word[i]);		// With each iteration, one character is pushed into the list.
	}

	list<char>::iterator it = characters.begin();// use both iterator it, and reverse_iterator rit.
	list<char>::reverse_iterator rit = characters.rbegin();

	while (it != characters.end())			// Use a loop to check the first character to the last, 
	{
		cout << *it;

		if (*it == *rit)					// check the first character to the last character. 
		{
			cout << " - ";
		}
		else
		{
			cout << " X ";
			diff = true;
		}
		cout << *rit;
		cout << endl;

		it++;								// move the iterator it  to the next character
		rit++;								// to move the reverse_iterator rit  to the next character (in reverse order)
	}
	cout << word << " is " << (diff ? "not " : "") << "a palindrome.\n";

	return 0;
}

/* ==== OUTPUT =============================================

Enter a word:   tacocat
t - t
a - a
c - c
o - o
c - c
a - a
t - t
tacocat is a palindrome.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_10\Debug\HW_10.exe (process 27184) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//======================================================== //

Enter a word:   stephen
s X n
t X e
e X h
p - p
h X e
e X t
n X s
stephen is not a palindrome.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_10\Debug\HW_10.exe (process 33292) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .


* //========================================================*/