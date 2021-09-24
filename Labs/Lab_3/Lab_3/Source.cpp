//  Attached:   Lab 3
//
// ===========================================================
//  File:   Lab_3
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//   Fill in the blanks below.  
//	 Then use your compiler and run the program 
//	 to see if you are correct. Submit your 
//   code(but not the written part).
//
// =========================================================== 

#include <iostream>
#include <string>

using namespace std;

struct Vehicle //6
{
	int id;
	int year;
	string model;
};

void displayCar(Vehicle&); //9

int main()
{
	int values[5] = { 2, 4, 7, 9, 11 };
	int number = 5;
	
	double* doublePtr = NULL; //1

	int* ptr = &number; //2

	int * doublePtr = values; //3

	cout << *ptr; //4

	*ptr = 44; //5

	Vehicle myCar = {}; //7

	Vehicle yourCar = {12345,2005,"Ford"}; //8

	return 0;
}