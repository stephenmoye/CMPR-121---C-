//  Attached:   HW_1a, HW_1b
//
// ===========================================================
//  File:   HW-1a
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function calculates the amount of a sale, the 
//   commission of the sale, and the total pay.
// =========================================================== 

#include <iostream>
#include <iomanip>

using namespace std;

int getSalesAmt();
int calcCommission(float sales);
int calcPay(float commission);
void displayPay(float sales, float commission, float total);

const float BASE_PAY = 2500.00;

//  =============================================================================
//  main
//  =============================================================================
int main() {
    float sales = 0;
    float commission = 0;
    float total = 0;

    sales = getSalesAmt();
    commission = calcCommission(sales);
    total = calcPay(commission);
    displayPay(sales, commission, total);

    return 0;
}
//  =============================================================================
//  end of main
//  =============================================================================



//  =============================================================================
//  getSalesAmt
//  =============================================================================
//	This function prompts the user to enter their monthly sales 
// 
//  Input: 
//      no parameters
//  Output: 
//      the dollar amount of sales as a float and returns it to main()
//  =============================================================================

int getSalesAmt()
{
    float sales;

    cout << "Enter monthly sales amount:\t" << endl;
    cin >> sales;

    return sales;
}
//  =============================================================================
//  end of getSalesAmt
//  =============================================================================



//  =============================================================================
//  calcCommission
//  =============================================================================
//  This function takes the value of sales and tests it against 3 commission tiers
//  that determine the percentage of commission from the calculation.
// 
//  Input:
//      sales - the dollar amount in sales, passed from main()
//  Output:
//      the commission amount is calculated by a percentage of the sales amount
//      and returned to main() 
//  =============================================================================
int calcCommission(float sales)
{
    int commission;

    if (sales > 50000)
        commission = sales * .02;
    else if (sales >= 25000 && sales <= 50000)
        commission = sales * .015;
    else
        commission = 0;

    return commission;
}
//  =============================================================================
//  end of calcCommission
//  =============================================================================



//  =============================================================================
//  calcPay
//  =============================================================================
// 
//  Input:
//      sales - the dollar amount in sales, passed from main()
//  Output:
//      the commission amount is calculated by a percentage of the sales amount
//      and returned to main() 
//  =============================================================================
int calcPay(float commission)
{
    float total;
    total = commission + BASE_PAY;

    return total;
}
//  =============================================================================
//  end of calcPay
//  =============================================================================




void displayPay(float sales, float commission, float total)
{
    cout << "Monthly sales:\t $ " << setprecision(2) << fixed << sales << endl << endl;
    cout << "Commission:\t $ " << setprecision(2) << commission << endl << endl;
    cout << "Base Pay:\t $ " << setprecision(2) << BASE_PAY << endl << endl;
    cout << "Total Pay:\t $ " << setprecision(2) << total << endl << endl;

    char again;
    
    cout << "Do it again? (Y/N) ";
    cin >> again;

    if (toupper(again) == 'Y')
    {
        main();
    }
}