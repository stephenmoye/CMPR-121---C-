// Student.cpp

#include "Student.h"
//===============================================//
Student::Student()
{
	id = 0;
	units = 0;
	name = "";
}
//===============================================//
Student::Student(int id, int units, string name)
{
	this->id = id;
	this->units = units;
	this->name = name;
}
//===============================================//
Student::~Student(){}
//===============================================//
void Student::setId(int id)
{
	this->id = id;
}
//===============================================//
void Student::setName(string name)
{
	this->name = name;
}
//===============================================//
void Student::setUnits(int units)
{
	this->units = units;
}
//===============================================//
void Student::displayRecord()const
{
	cout << "ID:	" << id << endl
		<< "Name:	" << name << endl
		<< "Units:	" << units << endl << endl;
}
//===============================================//