#ifndef RECEIPT_H
#define RECEIPT_H
#include "UserOrder.h"
#include "Product.h"
class Receipt
{
private:
	UserOrder customer;
	Product* products;
	int numofProducts;
public:
	Receipt();
	Receipt(UserOrder customer, Product* products, int numofProducts);
	void setCustomer(UserOrder customer);
	void setProducts(Product* products, int numOfProducts);
	UserOrder getCustomer();
	void setNumberOfProducts(int numofProducts);
	int getNumberOfProducts();
	void addProducts(Product* product);
	void displayReceipt();

};
#endif

