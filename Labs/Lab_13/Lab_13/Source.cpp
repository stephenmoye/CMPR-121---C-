//	Attached: Lab_13.pdf
//
//  ==============================================
//  File: Lab_13.pdf
//  ==============================================
//
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//	 Description:
//	 This program pushes 6 values to a STL deque at
//	 various positions. Then a readout of the specs
//   of that deque is printed to the screen.
//   ==============================================

#include <iostream>
#include <deque>				// 1. Write a program that uses STL deque.

using namespace std;

void showNumbers(deque<int>);	
void displayNumbers(deque<int>);

int main()
{
	deque<int> numbers;			// 2. Declare a deque object named: numbers - int
								// 3. Push 6 values into the deque in the following order:
	numbers.push_back(1);		// 3a. First push a 1 at the back of the deque.
	numbers.push_front(2);		// 3b. Then push a 2 at the front.
	numbers.push_back(3);		// 3c. Then a 3 at the back.
	numbers.push_front(4);		// 3d. 4 at the front
	numbers.push_back(5);		// 3e. 5 at the back
	numbers.push_front(6);		// 3f. 6 at the front

	showNumbers(numbers);

	return 0;
}

void showNumbers(deque<int> numbers) // 4. Create a function named: showNumbers
{
	cout << "Here are the values in the deque:\n";
	displayNumbers(numbers);

	// 5. display the number of values in the deque
	cout << "Number of values in the deque: " << numbers.size() << endl;

	// 6. display the maximum number of values
	cout << "Maximum values: " << numbers.max_size() << " bytes.\n\n";

	// 7. display the value at index [2].
	cout << "The value at index[2]: " << numbers.at(2) << endl;

	// 8. display the value at the front of the deque.
	cout << "The value at the front: " << numbers.front() << endl;

	// 9. display the value at the back of the deque.
	cout << "The value at the back: " << numbers.back() << endl << endl;

	// 10. Remove the front value and display the deque values.
	cout << "Now removing the front value...\n";
	numbers.pop_front();
	cout << "Here are the values after removing the front:\n";
	displayNumbers(numbers);

	// 11. Remove the back value and display the deque values.
	cout << "\nNow removing the back value...\n";
	numbers.pop_back();
	cout << "Here are the values after removing the back:\n";
	displayNumbers(numbers);


}

void displayNumbers(deque<int> numbers) 
{
	// 4c. Use iterator in for loop to display numbers
	for (deque<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}
}

/* ==== OUTPUT =============================================
Here are the values in the deque:
6
4
2
1
3
5
Number of values in the deque: 6
Maximum values: 1073741823 bytes.

The value at index[2]: 2
The value at the front: 6
The value at the back: 5

Now removing the front value...
Here are the values after removing the front:
4
2
1
3
5

Now removing the back value...
Here are the values after removing the back:
4
2
1
3

C:\Users\Steve\Desktop\School\Computer Science\CMPR121\Labs\Lab_13\Debug\Lab_13.exe (process 19352) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

//======================================================== */

