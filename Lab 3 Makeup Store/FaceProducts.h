#ifndef FACEPRODUCTS_H
#define FACEPRODUCTS_H
#include "Product.h"
#include <iostream>
using namespace std;
class FaceProducts : public Product
{
private:
	string skinType;
public:
    FaceProducts();
    FaceProducts(string n, double p, string type);
    void setSkinType(string skinType);
    string getSkinType();
    void display() override;
};
#endif

