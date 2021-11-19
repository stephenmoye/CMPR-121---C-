// Grad.h - derived class

#include "Student.h"

class Grad : public Student // inheritance from Student
{
private:
	string degree;
public:
	Grad();
	Grad(int id, string name, int units, string degree);
	~Grad();
	virtual void displayRecord()const;
};