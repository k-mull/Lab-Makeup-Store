#include "Eyes.h"
#include <iostream>
using namespace std;
double Eyes::EyeProducts()
{
    cout << "Please select your item:\n";
    cout << "1. Mascara ($10.50)\n";
    cout << "2. Eye Shadow ($12.00)\n";
    cout << "3. Eye Liner ($7.50)\n";
    cout << "Enter your choice (1-3): ";
    cin >> eyeChoice;

    double Price = 0.0;
    switch (eyeChoice) 
    {
    case 1:
        Price = 10.50;
        cout << "You selected mascara.\n";
        break;
    case 2:
        Price = 12.00;
        cout << "You selected Eye Shadow.\n";
        break;
    case 3:
        Price = 7.50;
        cout << "You selected Eye Liner.\n";
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
        break;
    }
   
    return Price;
}