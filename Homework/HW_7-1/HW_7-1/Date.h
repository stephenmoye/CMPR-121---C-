// Date.h - class specification
#include <iostream>;

using namespace std;

class Date
{
private:
	// instance variables
	int month;
	int day;
	int year;
public:
	Date(); // default constructor (no params)
	Date(int dateMonth, int dateDay, int dateYear); // overloaded constructor
	~Date(); // destructor

	// functions
	void setDate(int dateMonth, int dateDay, int dateYear);
	void addDays(int days);
	void displayDate()const;
};