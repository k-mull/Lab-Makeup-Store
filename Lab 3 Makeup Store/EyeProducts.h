#ifndef EYES_H
#define EYES_H
#include "Product.h"
#include <iostream>
using namespace std;
class EyeProducts : public Product
{
private:
	string eyeColor;
public:
	 EyeProducts();
	 EyeProducts(string n, double p, string c);
	 void setEyeColor(string eyeColor);
	 string getEyeColor();
	 void display() override;

};
#endif
