//  Attached:   Lab 9
//
//  =============================================================================
//  File:  Lab_9.pdf
//  =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//  =============================================================================

#include "Painting.h"
#include "Sculpture.h"

void displayArt(Art& art);

int main()
{
	Painting a1("12345","The Kiss", "Gustav Klimt", "Oil", "Symbolist", 1908, 2500);
	Sculpture a2("54321", "The Thinker", "Rodin", "Bronze", "Impressionism", 1880, 2000);

	displayArt(a1);
	displayArt(a2);

	return 0;
}

void displayArt(Art& art)
{
	art.showArt();
}

/* Output: ==========================
*
ID:  12345
Title : The Kiss
Artist : Gustav Klimt
Paint Medium : Oil
Genre : Symbolist
Year : 1908
Price : $2500

ID : 54321
Title : The Thinker
Artist : Rodin
Material : Bronze
Genre : Impressionism
Year : 1880
Price : $2000


C : \Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_9\Debug\Lab_9.exe(process 21840) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

===================================== */