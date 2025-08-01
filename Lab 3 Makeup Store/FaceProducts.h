#ifndef FACEPRODUCTS_H
#define FACEPRODUCTS_H
#include "Product.h"
#include <iostream>
using namespace std;
class FaceProducts : public Product
{
private:
    //variable holding the type of skin the product is marketed towards
	string skinType;
public:
    //constructors
    FaceProducts();
    FaceProducts(string n, double p, string type);

    //setters
    void setSkinType(string skinType);

    //getters
    string getSkinType();

    //override the parent virtual function
    void display() override;
};
#endif

