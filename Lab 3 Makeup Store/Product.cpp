#include "Product.h"
Product::Product()
{
	name = "Makeup";
	price = 7.99;
}
Product::Product(string n, double p)
{
	name = n;
	price = p;
}
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
void Product::display()
{
	cout << "Product: " << name << endl; 
	cout << "Price: " << price << endl; 

 }

 