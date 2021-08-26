//  Attached:   HW_1a, HW_1b
//
// ===========================================================
//  File:   HW-1a
// ===========================================================
//   Programmer:   Stephen Moye
//   Class:   CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//   Description:
//	 This function calculates the amount of a sale, the 
//   commission of the sale, and the total pay.
// =========================================================== 


#include <iostream>
using namespace std;

int getSalesAmt();
int calcCommission(int sales);
int calcPay(int commission);
void displayPay(int sales, int commission, int total);

const int BASE = 2500;

int main() {
    int sales;
    int commission;
    int total;

    sales = getSalesAmt();
    calcCommission(sales);
    calcPay(commission);
    displayPay(sales, commission, total);

    return 0;

}

int getSalesAmt()
{
    int sales;

    cout << "Enter monthly sales amount:\t";
    cin >> sales;

    return sales;
}

int calcCommission(int sales)
{
    int commission;
    cout << "sales: $" << sales << endl;
    if (sales > 50000)
    {
        commission = sales * .02;
    }
    else if (sales >= 25000 && sales <= 50000)
    {
        commission = sales * .015;
    }
    else
    {
        commission = 0;
    }

    return commission;
}

int calcPay(int commission)
{
    int total;
    total = commission + BASE;

    return total;
}

void displayPay(int sales, int commission, int total)
{
    cout << "Monthly sales:\t $ " << sales << endl;
    cout << "Commission:\t $ " << commission << endl;
    cout << "Base Pay:\t $ " << BASE << endl;
    cout << "Total Pay:\t $ " << total << endl;
}