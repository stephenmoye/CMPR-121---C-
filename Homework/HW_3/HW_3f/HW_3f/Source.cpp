#include "Time.h"

void getTime(Time&);
bool isTimeValid();
void addOneSecond();
void displayTime();

int main()
{
	Time hours;
	Time minutes;
	Time seconds;

	Time currentTime{};

	getTime(currentTime);

	return 0;
} 


void getTime(Time& currentTime)
{
	cout << "Enter the time in \"military time\", (24-hour format),\n" <<
		" in the following order : HH:MM:SS, (Hours, Minutes, Seconds).\n";

	cout << "Hours:   ";
	cin >> currentTime.hours;
	cout << "Minutes:   ";
	cin >> currentTime.minutes;
	cout << "Seconds:   ";
	cin >> currentTime.seconds;
}
