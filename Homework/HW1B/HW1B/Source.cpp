//  Attached:   HW_1a, HW_1b
//
// ===========================================================
//  File:   HW-1b
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function prompts the user to enter 
//   temperatures in three cities and outputs the average
// =========================================================== 

#include <iostream>
#include <iomanip>

using namespace std;

void getTemps(float[]);
float calcAvg(float[]);
void displayAvg(float average);

const int SIZE = 3;

//  =============================================================================
//  main
//  =============================================================================
int main() {

    float temps[SIZE];
    float average = 0;

    getTemps(temps);
    average = calcAvg(temps);
    displayAvg(average);
    
    return 0;
}
//  =============================================================================
//  end of main
//  =============================================================================



//  =============================================================================
//  getSalesAmt
//  =============================================================================
//	This function prompts the user to enter their monthly sales in dollars
// 
//  Input: 
//      no parameters
//  Output: 
//      the dollar amount of sales as a float, returns to main()
//  =============================================================================
void getTemps(float temps[])
{

    cout << "Enter temperatures of " << SIZE <<" cities. " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << endl << "#" << i+1 << ":\t";
        cin >> temps[i];
    }

}
//  =============================================================================
//  end of getSalesAmt
//  =============================================================================


float calcAvg(float temps[])
{
    float average;
    float sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += temps[i];
    }

    average = sum / SIZE;

    return average;
}

void displayAvg(float average)
{
    cout << endl << endl <<  "The average temperature is " << setprecision(1) << fixed << average << " degrees." << endl;
}
