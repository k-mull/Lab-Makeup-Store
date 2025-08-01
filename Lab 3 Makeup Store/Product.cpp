#include "Product.h"
Product::Product()
{
	//default values for product
	name = "Makeup";
	price = 7.99;
}
Product::Product(string n, double p)
{
	name = n;
	price = p;
}

//implementations for setter and getters
void Product::setName(string name)
{
	this->name = name;
}
void Product::setPrice(double price)
{
	this->price = price;
}
string Product::getName()
{
	return name;
}
double Product::getPrice() const
{
	return price;
}

//default display that gets overriden
void Product::display()
{
	cout << "Product: " << name << endl; 
	cout << "Price: " << price << endl; 

 }

 