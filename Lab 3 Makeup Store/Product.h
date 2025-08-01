#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <iostream>
using namespace std;
class Product
{
private:
	//name of product and the price of the product
	string name;
	double price;
public:
	//constructors
	Product();
	Product(string n, double p);

	//parent virtual function
	virtual void display(); 


	//setter
	void setPrice(double price);
	void setName(string name);

	//getter
	string getName();

	virtual double getPrice() const;
	

};
#endif

