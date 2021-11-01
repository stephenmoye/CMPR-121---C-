// Presidents.h - class spec

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Presidents
{
private:
	// instance variables
	int number;
	string name;
	string quote;
public:
	Presidents(); // default constructor
	~Presidents(); // destructor
	void setNumber(int number);
	void setName(string name);
	void setQuote(string quote);
	void displayPresidents();
};