#include <iostream>
#include "Rectangle.h"

using namespace std;

int Rectangle::countRectangles = 0;

void Rectangle::setDimensions(float width, float length)
{
	this->width = width;
	this->length = length;
}