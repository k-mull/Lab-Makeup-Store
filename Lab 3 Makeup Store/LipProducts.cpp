#include "LipProducts.h"
#include <iostream>
using namespace std;
LipProducts::LipProducts()
{
	//setters from parent function
	this->setName("Elf Super Stay");
	this->setPrice(6.99);

	//default lip property
	lipChoice = "plumping";
}
LipProducts::LipProducts(string n, double p, string s)
{
	this->setName(n);
	this-> setPrice(p);
	lipChoice = s;
}
//implemenation for setter and getter
void LipProducts::setLipChoice(string lipChoice)
{
	this->lipChoice = lipChoice;
}
string LipProducts::getLipChoice()
{
	return lipChoice;
}

//the display for each lip product
void LipProducts::display()
{
	cout << "Lip Product: " << getName() << endl;
	cout << "Price: " << getPrice() << endl;
	cout << "Lip Product Shade:" << getLipChoice() << endl;
}