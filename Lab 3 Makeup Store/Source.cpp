#include <iostream>
#include "UserOrder.h"
#include "Product.h"
#include "LipProducts.h"
#include "FaceProducts.h"
#include "Receipt.h"
using namespace std;
int main()
{
 LipProducts l1("Velvet Kiss", 15.99, "Red");
 FaceProducts f1("Flawless Finish", 25.50, "Oily");

 Product products[] = { l1, f1 };

    
    UserOrder c1("Kim Smith", "5012588476");


    Receipt order1(c1, products, 2);
    

    order1.displayReceipt();

    
}