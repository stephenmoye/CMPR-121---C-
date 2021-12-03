//  Attached: HW_10a.pdf, HW_10b.pdf, HW_10c.pdf, HW_10d.pdf
//
//  ==============================================
//  File: HW_10b.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program declares a vector and pushes values
//   to the back of it. then loops to display them
//   ==============================================
#include <iostream>
#include <vector>

using namespace std;

void displayVals(vector<int>);

int main()
{
	vector<int> values; //1. Declare a vector named values

	//2. Push these values at the back of the vector: 
	//   1  2  4  9  5
	values.push_back(1);
	values.push_back(2);
	values.push_back(4);
	values.push_back(9);
	values.push_back(5);
	displayVals(values);

	values.insert(values.begin(), 3);//4. push a 3 on the front of the vector,
	displayVals(values);			 //   and then display the vector values again

	values.erase(values.begin());	 //5. delete the 3 from the beginning, and
	displayVals(values);			 //   again display all values.

	values.pop_back();				 //6. Now remove the value at the back of the of 
	displayVals(values);			 //   the vector (the 5), and display the values.

	//7. use the size() function to display the number of values in the vector.
	cout << "There are " << values.size() << " values.";

	return 0;
}

void displayVals(vector<int> values)
{
	cout << "Vector: ";
	//3. Use a for loop to display all vector values.
	for (int i = 0; i < values.size(); i++) 
	{
		cout << values[i] << " ";
	}
	cout << endl << endl;
}	

/* ==== OUTPUT =============================================
Vector: 1 2 4 9 5

Vector: 3 1 2 4 9 5

Vector: 1 2 4 9 5

Vector: 1 2 4 9

There are 4 values.
C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Homework\HW_10\Debug\HW_10.exe (process 5104) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
//========================================================*/