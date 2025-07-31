#ifndef LIPPRODUCTS_H
#define LIPPRODUCTS_H
#include <iostream>
#include "Product.h"
using namespace std;

class LipProducts : public Product
{
private:
	string lipChoice;
public:
	LipProducts();
	LipProducts(string n, double p, string s);
	void setLipChoice(string lipChoice);
	string getLipChoice();
	void display() override;

};
#endif
