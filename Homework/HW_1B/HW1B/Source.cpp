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
//	This function prompts the user to enter 3 temperatures
// 
//  Input: 
//      temps, an empty array
//  Output: 
//      the user's 3 temps are pushed to the temps array
//  =============================================================================
void getTemps(float temps[])
{

    cout << "Enter temperatures of " << SIZE <<" cities. " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << endl << "#" << i + 1 << ":\t";
        cin >> temps[i];
    }

}
//  =============================================================================
//  end of getSalesAmt
//  =============================================================================



//  =============================================================================
//  calcAvg
//  =============================================================================
//	This function calculates the sum and average of the 3 temperatures
// 
//  Input: 
//      temps, an empty array
//  Output: 
//      the average of the 3 temperatures is returned to main
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
//  =============================================================================
//  end of calcAvg
//  =============================================================================



//  =============================================================================
//  displayAvg
//  =============================================================================
//	This function displays the average of the 3 temperatures to 1 decial point
// 
//  Input: 
//      average, a float of the 3 temperature averages
//  Output: 
//      the average of the 3 temperatures with some text is displayed
//  =============================================================================
void displayAvg(float average)
{
    cout << endl << endl <<  "The average temperature is " << setprecision(1) << fixed << average << " degrees." << endl;
}
//  =============================================================================
//  end of displayAvg
//  =============================================================================