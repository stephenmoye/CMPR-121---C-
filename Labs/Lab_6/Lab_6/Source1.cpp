
#include <iostream>
#include <fstream>
#include <iomanip>							//1.

using namespace std;

// =============================================================================
// main
// =============================================================================
int main()
{
	const int SIZE = 10;
	int numbers[SIZE] = { 1,  2,  3,  4,  5, 6,  7,  8,  9,  10 };

	fstream file;

	cout << "Writing the data to the file.\n";

	file.open("numbers.dat", ios::binary | ios::out);	//1.

	file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

	cout << "Writing data to file.\n";

	file.close();

	file.open("numbers.dat", ios::binary | ios::in);	//4

	return 0;
}

