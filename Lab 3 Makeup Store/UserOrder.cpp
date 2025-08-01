#include "UserOrder.h"

UserOrder::UserOrder()
{
	//default customer name and number
	username = "kaleesha";
	phoneNumber = "8703181944";
}

//constructor with parameters
UserOrder::UserOrder(string username, string phoneNumber)
{
	this->username = username;
	this->phoneNumber = phoneNumber;
}

//implementation for setter and getter
void UserOrder::setUserName(string username)
{
	this->username = username;
}
string UserOrder::getUserName()
{
	return username;
}

void UserOrder::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
string UserOrder::getPhoneNumber()
{
	return phoneNumber;
}

//the customer info displayed above receipt
void UserOrder::displayUser()
{
	cout << "Customer: " << getUserName() << endl;
	cout << "Phone Number:" << getPhoneNumber() << endl;
}