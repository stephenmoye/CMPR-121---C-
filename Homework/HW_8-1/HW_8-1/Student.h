// Student.h - Class specification
#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected: // protected for derived class access
	int id;
	int units;
	string name;
public:
	Student();
	Student(int id, int units, string name);
	~Student();
	void setId(int id);
	void setUnits(int units);
	void setName(string name);
	void displayRecord()const;
};