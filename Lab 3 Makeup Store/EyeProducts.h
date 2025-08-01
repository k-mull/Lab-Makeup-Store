#ifndef EYES_H
#define EYES_H
#include "Product.h"
#include <iostream>
using namespace std;
class EyeProducts : public Product
{
private:
	//the color of the eye product
	string eyeColor;
public:
	//constructors
	 EyeProducts();
	 EyeProducts(string n, double p, string c);

	 //setter
	 void setEyeColor(string eyeColor);

	 //getter
	 string getEyeColor();

	 //override the parent virtual function
	 void display() override;

};
#endif
