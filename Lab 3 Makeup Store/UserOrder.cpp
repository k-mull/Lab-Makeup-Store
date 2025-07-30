#include "UserOrder.h"

#include <iostream>
using namespace std;
UserOrder::UserOrder()
{
	makeupChoice = 1;
	anotherOrder = 'y';

}
UserOrder::UserOrder(int makeChoice,  char addOrder)
{
	makeupChoice = makeChoice;
	anotherOrder = addOrder;
}

void UserOrder::Order()
{
    cout << "Welcome to the Makeup Store!\n";
    do {
       
        cout << "Please select your department:\n";
        cout << "1. Eyes\n";
        cout << "2. Lips\n";
        cout << "3. Face\n";
        cout << "Enter your choice (1-3): ";
        cin >> makeupChoice;


        switch (makeupChoice) {
        case 1:
            cout << "You selected Eyes.\n";
            EyeProducts();
            break;
        case 2:

            cout << "You selected Lips.\n";
            lipProducts();
            break;
        case 3:

            cout << "You selected Face.\n";
            faceProducts();
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            continue;
        }


    } while (AddAnotherOrder());
    
}

bool UserOrder::AddAnotherOrder()
{
   
    cout << "Would you like to add another product? (y/n): ";
    cin >> anotherOrder;
    bool choice;
    if (anotherOrder == 'n' || anotherOrder == 'N')
    {
        cout << "Thanks for shopping!" << endl;
        choice = false;
    }
    else if (anotherOrder == 'y' || anotherOrder == 'Y')
        choice = true;
    else
        cout << "Invalid choice. Please try again.";
        cin >> anotherOrder;

    return choice;
}