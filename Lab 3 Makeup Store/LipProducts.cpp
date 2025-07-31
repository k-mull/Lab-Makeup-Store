#include "LipProducts.h"
#include <iostream>
using namespace std;
LipProducts::LipProducts()
{
	this->setName("Elf Super Stay");
	this->setPrice(6.99);
	lipChoice = "pink";
}
LipProducts::LipProducts(string n, double p, string s)
{
	this->setName(n);
	this-> setPrice(p);
	lipChoice = s;
}
void LipProducts::setLipChoice(string lipChoice)
{
	this->lipChoice = lipChoice;
}
string LipProducts::getLipChoice()
{
	return lipChoice;
}
void LipProducts::display()
{
	cout << "Lip Product: " << getName() << endl;
	cout << "Price: " << getPrice() << endl;
	cout << "Lip Product Shade:" << getLipChoice() << endl;
}