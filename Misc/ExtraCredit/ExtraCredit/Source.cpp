#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number = 3;
	float value = 3.0;
	double amt = 5.0;

	cout << number << " squared equals " << calcSquare(number) << ".\n";

	return 0;
}

template <typename T> 
T calcSquare(T number)
{
	return number * number;
}

//int calcSquare(int number)
//{
//	return number * number;
//}
//
//int calcSquare(float number)
//{
//	return number * number;
//}
