//  Attached:   11-9 Lecture
//
//  =============================================================================
//  File:  11-9 Lecture
//  =============================================================================
//   Programmer:   Stephen Moye
//   Class:        CMPR 121 Tuesday
//   Instructor:   Dennis Rainey
//
//  =============================================================================

#include "Auto.h"
#include "Truck.h"


int main() 
{
    //Vehicle v1(33334, 2020, "Ford", 4000); // can't be instantiated due to pure virtual fn
    Auto a2(12345, 1954, "Muntz Jet", 10000, true);
    Truck t2(33333, 2016, "Kenworth", 10000, 30000);

    return 0;
}


//void showRetailPrice(Vehicle& vehicle);

/*
Auto a2(12345, 1954, "Muntz Jet", 10000, true);

cout << "Auto #2:\n";
showRetailPrice(a2);

cout << "Truck #2:\n";
showRetailPrice(t2);


void showRetailPrice(Vehicle& vehicle)      // static binding - comiler binds fn call 
{
    cout << "The retail price is $" << vehicle.calcRetail() << ".\n\n";
}


    Truck t1;
    Auto a1;
    cout << "Auto #1:\n";
    t1.displayVehicle();

    cout << "Auto #2:\n";       // compiler binds the function call
    t2.displayVehicle();

    t1.setId(54321);
    t1.setYear(2015);
    t1.setModel("Ford F150");
    t1.setWholesale(9000);
    t1.setLoadCapacity(30000);

    cout << "Truck #1 after set functions:\n";
   t1.displayVehicle();

   cout << "Truck #2 after set functions:\n";
   t2.displayVehicle();
   */