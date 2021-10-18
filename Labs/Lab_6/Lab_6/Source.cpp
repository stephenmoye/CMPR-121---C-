
#include <iostream>
#include <fstream>
#include <iomanip>							//1.

using namespace std;

// =============================================================================
// main
// =============================================================================
int mainX()
{
	fstream dataFile;
	double number = 17.816392;

	dataFile.open("values.txt", ios::out);	//2.

	dataFile << fixed << number << endl		//3.
			 << setprecision(2) << number	//4.
			 << endl;

	cout << "Data has been written to file.\n";

	dataFile.close();

	return 0;
}

