#include "EyeProducts.h"
#include <iostream>
using namespace std;
EyeProducts::EyeProducts()
{
	//setters from parent function
	this->setName("Sky High Mascara");
	this->setPrice(3.99);

	//default color for eye product
	eyeColor = "Black";
}
EyeProducts::EyeProducts(string n, double p, string c)
{

	this->setName(n);
	this->setPrice(p);
	eyeColor = c;
}

//implementation for setter and getter
void EyeProducts::setEyeColor(string eyeColor)
{
	this->eyeColor = eyeColor;
}
string EyeProducts::getEyeColor()
{
	return eyeColor;
}

//how the information for the eye products is laid out
void EyeProducts::display()  
{
	cout << "Eye Product: " << getName() << endl; 
	cout << "Price: " << getPrice() << endl;
	cout << "Color of Eye Product:" << getEyeColor() << endl; 
}