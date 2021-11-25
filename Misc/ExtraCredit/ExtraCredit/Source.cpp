#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	void displayCount(Rectangle & rectangle);

	float width = 3.0;
	float length = 5.0;


	Rectangle rectangle;

	rectangle.setDimensions(width, length);

	void displayCount(Rectangle & rectangle)
	{
		cout << rectangle;
	}

	return 0;
}