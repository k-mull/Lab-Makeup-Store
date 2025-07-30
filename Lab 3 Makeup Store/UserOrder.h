#ifndef USERORDER_H
#define USERORDER_H
#include "Face.h"
#include "Lips.h"
#include "Eyes.h"
class UserOrder : public Eyes, public Face, public Lips
{
private:
	int makeupChoice;
	char anotherOrder;
	
public:
	UserOrder();
	UserOrder(int makeChoice, char addOrder);
	bool AddAnotherOrder();
	void Order();
	
};
#endif

