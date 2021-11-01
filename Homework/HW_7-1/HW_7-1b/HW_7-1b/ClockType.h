// ClockType.h - class specification
#include <iostream>;
#include <iomanip>;

using namespace std;

class ClockType
{
private:
	// instance variables
	int hrs;
	int mins;
	int secs;
public:
	// ----------------------------------------------------------	
	// Description:  	Default constructor – Object is constructed
	//			and its data members are assigned 0s.
	// Input:	No parameters passed		
	// Output:	hrs=0; mins=0; secs=0
	// ----------------------------------------------------------	
	ClockType(); // default constructor (no params)
	// ----------------------------------------------------------	

	// ----------------------------------------------------------	
	// Description:  	Constructor – Object is constructed and 
	//			data members are set according to parameters.
	// Input:	hours, minutes, and seconds are passed 
	//			when object is instantiated.	
	// Output:	hrs=hours; mins=minutes; secs=seconds
	// ----------------------------------------------------------	
	ClockType(int hours, int minutes, int seconds);
	// ----------------------------------------------------------	

	// ----------------------------------------------------------	
	// Description:  	Destructor
	// ----------------------------------------------------------
	~ClockType(); // destructor
	// ----------------------------------------------------------	

	// ----------------------------------------------------------	
	// Description:  	setTime method sets the time.  Time is set 
	//   		according to the parameters.
	// Input:	hours, minutes, and seconds are passed
	// Output:	hrs=hours; mins=minutes; secs=seconds
	// ----------------------------------------------------------	
	void setTime(int hours, int minutes, int seconds);
	// ----------------------------------------------------------	
	
	// ----------------------------------------------------------	
	// Description:  	getTime method returns the time. 
	// Input:	hours, minutes, and seconds are passed by reference
	// Output:	hrs=hours; mins=minutes; secs=seconds
	// ----------------------------------------------------------	
	void getTime(int &hours, int &minutes, int &seconds);
	// ----------------------------------------------------------	

	// ----------------------------------------------------------	
	// Description:  	incrementSeconds method increments time by one second.
	//    Use military time:  0:0:0 am to 23:59:59 pm
	//    If there are 59 seconds and one one second is added, then seconds is
	//    assigned zero and minutes is incremented.  
	//    (Use incrementMinutes() function).
	// Input:	
	// Output:	Time is incremented by one second.
	// ----------------------------------------------------------	
	void incrementSeconds();
	// ----------------------------------------------------------	

	// ----------------------------------------------------------	
	// Description:  	incrementMinutes method increments time by one minute.
	//    If there are 59 minutes and one one minute is added, then minutes is
	//    assigned zero and hours is incremented.  
	//    (Use incrementHours() function).
	// Input:	
	// Output:	Time is incremented by one minute.
	// ----------------------------------------------------------	
	void incrementMinutes();
	// ----------------------------------------------------------

	// ----------------------------------------------------------	
	// Description:  	incrementHours method increments time by one hour
	// Input:	
	// Output:	Time is incremented by one hour.
	// ----------------------------------------------------------	
	void incrementHours();
	// ----------------------------------------------------------	

	// ----------------------------------------------------------
	// Description:  	printTime method prints the time.
	// Input:	
	// Output:	Time is printed in the form:  hh:mm:ss
	// ----------------------------------------------------------	
	void printTime()const;
	// ----------------------------------------------------------	

	// Description:  	areTimesEqual method compares two times.
	// Input:	
	// Output:  	Returns true if this time is equal to otherClock.  
	//		Otherwise returns false.
	bool areTimesEqual();
	// ----------------------------------------------------------	
};