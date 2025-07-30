#include "Lips.h"
#include <iostream>
using namespace std;

double Lips::lipProducts()
{
    cout << "Please select your item:\n";
    cout << "1. Lipstick ($10.99)\n";
    cout << "2. Lip Oil ($8.99)\n";
    cout << "3. Lip Liner ($5.00)\n";
    cout << "Enter your choice (1-3): ";
    cin >> lipChoice;

    double Price = 0.0;
    switch (lipChoice)
    {
    case 1:
        Price = 13.50;
        cout << "You selected Lipstick.\n";
        break;
    case 2:
        Price = 8.99;
        cout << "You selected Lip Oil.\n";
        break;
    case 3:
        Price = 7.00;
        cout << "You selected Lip Liner.\n";
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
        break;
    }
    return Price;
}