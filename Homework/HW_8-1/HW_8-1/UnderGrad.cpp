// UnderGrad.cpp

#include "UnderGrad.h"
//===============================================//
UnderGrad::UnderGrad()
{

	level = "";
}
//===============================================//
UnderGrad::UnderGrad(int id, string name, int units, string level)
{
	this->id = id;
	this->units = units;
	this->name = name;
	this->level = level;
}
//===============================================//
UnderGrad::~UnderGrad(){}
//===============================================//
void UnderGrad::displayRecord()const
{
	cout << "ID:	" << id << endl
		<< "Name:	" << name << endl
		<< "Units:	" << units << endl
		<< "Degree:	" << level << endl << endl;
}
//===============================================//