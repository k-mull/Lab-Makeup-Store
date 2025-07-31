#include "UserOrder.h"

UserOrder::UserOrder()
{
	username = "kaleesha";
	phoneNumber = "8703181944";
}
UserOrder::UserOrder(string username, string phoneNumber)
{
	this->username = username;
	this->phoneNumber = phoneNumber;
}
void UserOrder::setUserName(string username)
{
	this->username = username;
}
string UserOrder::getUserName()
{
	return username;
}
void UserOrder::displayUser()
{
	cout << "Customer: " << getUserName() << endl; 
	cout << "Phone Number:" << getPhoneNumber() << endl; 
}
void UserOrder::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
string UserOrder::getPhoneNumber()
{
	return phoneNumber;
}