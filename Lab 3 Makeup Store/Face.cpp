#include "Face.h"
#include <iostream>
using namespace std;
double Face::faceProducts()
{
    cout << "Please select your item:\n";
    cout << "1. Foundation ($13.50)\n";
    cout << "2. Concealer ($8.99)\n";
    cout << "3. Contour ($7.00)\n";
    cout << "Enter your choice (1-3): ";
    cin >> faceChoice;

    double Price = 0.0;
    switch (faceChoice)
    {
    case 1:
        Price = 13.50;
        cout << "You selected Foundation.\n";
        break;
    case 2:
        Price = 8.99;
        cout << "You selected Concealer.\n";
        break;
    case 3:
        Price = 7.00;
        cout << "You selected Contour.\n";
        break;
    default:
        cout << "Invalid choice. Please try again.\n";
        break;
    }
    return Price;
}