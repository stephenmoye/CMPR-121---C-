#include "Student.h"

void showRecord(Student& student);

int main()
{
	Student s1 + {333, "Tom", 3.3 };
	Student s2 = { 54321, "Kim Adams", 4.0 };

	cout << "Student #1:\n";
	showRecord(s1);

	cout << "Student #2:\n";
	showRecord(s2);

	return 0;
}

void showRecord(Student& student)
{
	cout << "ID:	" << student.id << endl
		<< "Name:  " << student.name << endl
		<< "GPA:   " << student.gpa << endl << endl;
}
