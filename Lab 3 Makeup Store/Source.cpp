#include <iostream>
#include "UserOrder.h"
#include "Product.h"
#include "LipProducts.h"
#include "FaceProducts.h"
#include "EyeProducts.h"
#include "Receipt.h"
using namespace std;
int main()
{
    //creating new objects with the name, priace, and color/type
 LipProducts l1("Velvet Kiss", 15.99, "Red");
 FaceProducts f1("Flawless Finish", 25.50, "Oily");
 EyeProducts e1("Long Lash", 26.00, "Black");


 //array hold the objects from above
Product products[] = { l1, f1, e1};

//the customer
UserOrder c1("Kim Smith", "5012588476");

//information being passed in the diaplay receipt function
Receipt order1(c1, products, 3);
    
//polymorphic variable 
Product* myProduct;
LipProducts myLipProduct;
myProduct = &myLipProduct;

//display for polymorphic variable
myProduct->display();

    cout << endl;
    cout << endl; 

  //the receipt for the first three products at the top
order1.displayReceipt();

    
}