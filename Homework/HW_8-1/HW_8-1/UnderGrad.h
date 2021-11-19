// UnderGrad.h - derived class

#include "Student.h"

class UnderGrad : public Student // inheritance from Student
{
private:
	string level;
public:
	UnderGrad();
	UnderGrad(int id, string name, int units, string level);
	~UnderGrad();
	virtual void displayRecord()const;
};