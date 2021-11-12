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
	void setWidth(double width);
	void setLength(double length);
	double getWidth()const;
	double getLength()const;
	double getArea(double width, double length)const;
};