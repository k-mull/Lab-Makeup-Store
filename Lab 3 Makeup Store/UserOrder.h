#ifndef USERORDER_H
#define USERORDER_H
#include <iostream>
using namespace std;
class UserOrder {
private:
	string username;
	string phoneNumber;
	
public:
	UserOrder();
	UserOrder(string username, string phoneNumber);
	void setUserName(string username);
	string getUserName();
	void setPhoneNumber(string phoneNumber);
	string getPhoneNumber();
	void displayUser();
	
};
#endif

