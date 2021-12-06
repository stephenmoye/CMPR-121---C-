// Attached: HW_11.pdf
//
// ==============================================
// File: HW_11.pdf
// ==============================================
//
// Programmer: Stephen Moye
// Class: CMPR 121 Tuesday
// Instructor: Dennis Rainey
// Description:
// This program calculates the roots and squares
// from 1 to 1000000 and outputs to a txt file,
// then prints the time it took with/out threads
// ==============================================

#include <iostream>
#include <thread>
#include <fstream>
#include <ctime>

using namespace std;

// 3. Here are the function prototypes:	
void writeRoots();
void writeSquares();

int main() // 4. Include code to run the program without threads
{
	cout << "main: startup";
	cout << "\n\nWaiting for file thread";

	clock_t start;
	clock_t end;

	start = clock();

	writeRoots();
	writeSquares();

	end = clock();
	
	cout << "main: done\n\n";
	// 5. Display the time
	cout << "Runtime without threads = " << (end - start) / CLK_TCK << " seconds.\n\n";

	return 0;
}

int main() // With threads
{
	// 5. Use the timer to calculate how long the program takes to calculate sqrts
	clock_t start;
	clock_t end;

	start = clock();

	// 6. Add code to create two threads:    
	cout << "main: startup";
	thread firstThread(writeRoots); // 7. first thread should call writeRoots()
	cout << "\n\nWaiting for file thread";
	thread secondThread(writeSquares); // 8. first thread should call writeSquares()

	firstThread.join();
	secondThread.join();

	cout << "main: done\n\n";
	end = clock();

	// 9. Again use the timer to calculate how long it takes 
	// Display the time
	cout << "Runtime with threads = " << (end - start) / CLK_TCK << " seconds.\n\n";

	return 0;
}

void writeRoots() // 1. function to calculate the square roots from 1 to 1,000,000
{
	ofstream outfile;
	outfile.open("roots.txt");	// 1. write them to a file named: roots.txt

	cout << "\n\nSquaring 1,000,000 numbers";

	for (int i = 0; i < 1000000; i++) // 4. for loop to calculate square roots

	{
		double root = sqrt(i);
		outfile << root << endl; // 4. and write them to a file
	}
	
	cout << "\n\nWriting 1,000,000 square roots to a file";
	cout << "\n\nThe square roots are ready.";

	outfile.close();
}

void writeSquares()	// 2. function to calculate the squares from 1 to 1,000,000
{
	ofstream outfile;
	outfile.open("squares.txt");

	for (int i = 0; i < 1000000; i++) // 4. for loop to calculate square roots
	{
		double square = pow(i,2);
		outfile << square << endl; // 4. and write them to a file
	}

	cout << "The squares are ready.\n\n";

	outfile.close();
}


// 10. 
// 22 seconds without threads
// vs
// 13 seconds with threads.
// 
// conclusion: multithreaded cuts the time down by at least 2/3

// =============================================================================
// OUTPUT
// =============================================================================
/*
main: startup

Waiting for file thread

Squaring 1,000,000 numbers

Writing 1,000,000 square roots to a file

The square roots are ready.The squares are ready.

main: done

Runtime without threads = 22 seconds.

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_11\Debug\HW_11.exe (process 12860) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

// =============================================================================
// =============================================================================
// =============================================================================

main: startup

Waiting for file thread

Squaring 1,000,000 numbers

Writing 1,000,000 square roots to a file

The square roots are ready.The squares are ready.

main: done

Runtime with threads = 13 seconds.


C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_11\Debug\HW_11.exe (process 30932) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/