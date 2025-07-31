#include "Receipt.h"
Receipt::Receipt() : customer("kaleesha", "8703181944")
{
	numofProducts = 3;
	products = new Product[numofProducts];
}
Receipt::Receipt(UserOrder customer, Product* products, int numofProducts)
{
	this->customer = customer;
	this->products = products;
	this->numofProducts = numofProducts;
}
void Receipt::setCustomer(UserOrder customer)
{
	this->customer = customer;
}
void Receipt::setProducts(Product* products, int numOfProducts)
{
	this->products = products;
	this->numofProducts = numOfProducts;
}
UserOrder Receipt::getCustomer()
{
	return customer;
}
void Receipt::setNumberOfProducts(int numofProducts)
{
	this->numofProducts = numofProducts;
}
int Receipt::getNumberOfProducts()
{
	return numofProducts;
}
void Receipt::addProducts(Product* product)
{
	numofProducts++;
	Product* newProduct = new Product[numofProducts];
	for (int i = 0; i < numofProducts - 1; i++) {
		newProduct[i] = products[i];
	}
	newProduct[numofProducts - 1] = products[numofProducts];
	delete[] products;
	products = newProduct;

}
void Receipt::displayReceipt()
{
	customer.displayUser();
	cout << "Order Details: " << endl; 
	double total = 0.0;
	
	for (int i = 0; i < numofProducts; i++)
	{
		products[i].display();
		total += products[i].getPrice();
	}
	cout << "Total Price: $" << total << endl; 
}