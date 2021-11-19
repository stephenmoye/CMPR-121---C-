// Grad.cpp

#include "Grad.h"

//===============================================//
Grad::Grad()
{
	degree = "";
}
//===============================================//
Grad::Grad(int id, string name, int units, string degree)
{
	this->id = id;
	this->units = units;
	this->name = name;
	this->degree = degree;
}
//===============================================//
Grad::~Grad() {}
//===============================================//
void Grad::displayRecord()const
{
	cout << "ID:	" << id << endl
		<< "Name:	" << name << endl
		<< "Units:	" << units << endl 
		<< "Degree:	" << degree << endl << endl;
}
//===============================================//