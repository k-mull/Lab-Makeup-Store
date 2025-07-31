#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <iostream>
using namespace std;
class Product
{
private:
	string name;
	double price;
public:
	Product();
	Product(string n, double p);
	virtual void display(); 

	void setPrice(double price);
	void setName(string name);
	string getName();

	virtual double getPrice() const;
	

};
#endif

