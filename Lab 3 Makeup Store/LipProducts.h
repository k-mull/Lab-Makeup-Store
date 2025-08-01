#ifndef LIPPRODUCTS_H
#define LIPPRODUCTS_H
#include <iostream>
#include "Product.h"
using namespace std;

class LipProducts : public Product
{
private:
	//the variable for the shade of the lip product
	string lipChoice;
public:
	//costructors
	LipProducts();
	LipProducts(string n, double p, string s);

	//setters
	void setLipChoice(string lipChoice);

	//getters
	string getLipChoice();

	//the override of the parent virtual function
	void display() override;

};
#endif
