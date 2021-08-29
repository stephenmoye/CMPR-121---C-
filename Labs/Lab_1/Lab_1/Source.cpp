//  Attached:   Lab #1
//
//  =============================================================================
//  File:   Lab_1.pdf
//  =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function prompts the user to enter 
//   temperatures in three cities and outputs the average
//  =============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int getBalance();
int getDeposit();
int calcNewBalance(float, float);
void displayBalance(float);

//  =============================================================================
//  main
//  =============================================================================
int main() {
    float balance;
    float deposit;
    float newBalance;

    balance = getBalance();
    deposit = getDeposit();
    newBalance = calcNewBalance(balance, deposit);
    displayBalance(newBalance);

    return 0;
}
//  =============================================================================
//  end of main
//  =============================================================================



// =============================================================================
// getBalance
// =============================================================================
// This function asks the user for their bank balance
//
// Input:
// no parameter
// Output:
// the balance amount is stored in balance variable 
// and returned to main()
// =============================================================================
int getBalance()
{
    float balance;

    cout << "Enter your bank balance: ";
    cin >> balance;

    return balance;
}
//  =============================================================================
//  end of getBalance
//  =============================================================================



// =============================================================================
// getDeposit
// =============================================================================
// This function asks the user for their deposit amount
//
// Input:
// no parameter
// Output:
// the deposit amount is stored in deposit variable 
// and returned to main()
// =============================================================================
int getDeposit()
{
    float deposit;

    cout << endl << "Enter the deposit amount: ";
    cin >> deposit;

    return deposit;
}
//  =============================================================================
//  end of getDeposit
//  =============================================================================



// =============================================================================
// calcNewBalance
// =============================================================================
// This function calculates the new balance after adding the 
// deposit and balance then returning the newBalance to main
// 
// Input:
// the user inputs of balance and deposit as floats
// Output:
// the newly calculated amount is stored in newBalance variable 
// and returned to main()
// =============================================================================
int calcNewBalance(float balance, float deposit)
{
    float newBalance;

    newBalance = balance + deposit;

    return newBalance;
}
//  =============================================================================
//  end of calcNewBalance
//  =============================================================================



// =============================================================================
// displayBalance
// =============================================================================
// This function displays the resulting newBalance
// 
// Input:
// the newBalance result of calculations
// Output:
// the final new balance as $
// =============================================================================
void displayBalance(float newBalance)
{
    cout << endl << "Your new balance is $" << newBalance << "." << endl;
}
//  =============================================================================
//  end of displayBalance
//  =============================================================================