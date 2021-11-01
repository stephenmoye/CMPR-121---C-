// Rectangle.h - class specification
#include <iostream>

using namespace std;

class Rectangle
{
private:
	// instance variables
	double width;
	double length;
public:
	Rectangle();  // default constructor (no params)
	~Rectangle(); // destructor
	void setWidth();
	void setLength();
	void getWidth();
	void getLength();
	void getArea();
};