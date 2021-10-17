#include <iostream>
#include <fstream>

using namespace std;

int main2()
{
	int number = 0;
	string name = "";

	ifstream infile;
	//ofstream outfile;

	infile.open("data.txt");
	//outfile.open("c:/names.txt");

	//infile >> number;
	//outfile << name;

	//infile.close();
	//outfile.close();


	if (infile.fail()) // fail state
	{
		cout << "Error opening file!\n";
		exit(1);
	}

	while (!infile.eof())
	{
		infile >> number;
		cout << number << endl;
	}


	return 0;

}