#ifndef USERORDER_H
#define USERORDER_H
#include <iostream>
using namespace std;
class UserOrder {
private:

	//customer info
	string username;
	string phoneNumber;
	
public:
	//constructors
	UserOrder();
	UserOrder(string username, string phoneNumber);

	//setters and getters
	void setUserName(string username);
	string getUserName();
	void setPhoneNumber(string phoneNumber);
	string getPhoneNumber();

	//displays user info (username and phone number)
	void displayUser();
	
};
#endif

