#include "EyeProducts.h"
#include <iostream>
using namespace std;
EyeProducts::EyeProducts()
{
	this->setName("Sky High Mascara");
	this->setPrice(3.99);
	eyeColor = "Black";
}
EyeProducts::EyeProducts(string n, double p, string c)
{
	this->setName(n);
	this->setPrice(p);
	eyeColor = c;
}
void EyeProducts::setEyeColor(string eyeColor)
{
	this->eyeColor = eyeColor;
}
string EyeProducts::getEyeColor()
{
	return eyeColor;
}
void EyeProducts::display()  
{
	cout << "Eye Product: " << getName() << endl; 
	cout << "Price: " << getPrice() << endl;
	cout << "Color of Eye Product:" << getEyeColor() << endl; 
}