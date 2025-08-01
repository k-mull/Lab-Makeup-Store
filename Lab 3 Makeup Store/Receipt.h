#ifndef RECEIPT_H
#define RECEIPT_H
#include "UserOrder.h"
#include "Product.h"
class Receipt
{
private:
	//aggregates
	UserOrder customer;
	Product* products;

	//keeps track of number of products
	int numofProducts;
public:

	//constructors
	Receipt();
	Receipt(UserOrder customer, Product* products, int numofProducts);

	//setter and getters
	void setCustomer(UserOrder customer);
	void setProducts(Product* products, int numOfProducts);
	UserOrder getCustomer();
	void setNumberOfProducts(int numofProducts);
	int getNumberOfProducts();

	//add additional products
	void addProducts(Product* product);


	//displays the entire order
	void displayReceipt();
};
#endif

