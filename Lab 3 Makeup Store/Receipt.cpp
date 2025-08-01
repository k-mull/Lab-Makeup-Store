#include "Receipt.h"
Receipt::Receipt() : customer("kaleesha", "8703181944")
{
	//new array of products
	numofProducts = 3;
	products = new Product[numofProducts];
}

Receipt::Receipt(UserOrder customer, Product* products, int numofProducts)
{
	this->customer = customer;
	this->products = products;
	this->numofProducts = numofProducts;
}

//setter and getter implementations
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

//the implementation for adding a new product in main
void Receipt::addProducts(Product* product)
{
	//increases size of array to make room for new product
	numofProducts++;

	//creates a new array for product to go in
	Product* newProduct = new Product[numofProducts];

	//transfers the original original array
	for (int i = 0; i < numofProducts - 1; i++) {
		newProduct[i] = products[i];
	}

	//new array for the new product
	newProduct[numofProducts - 1] = products[numofProducts];

	//deletes old array
	delete[] products;
	products = newProduct;

}

//the receipt display at the very end
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
	cout << "Thank you for your purchase!" << endl; 
}