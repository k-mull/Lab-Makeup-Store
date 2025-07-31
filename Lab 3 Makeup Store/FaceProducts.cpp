#include "FaceProducts.h"
#include <iostream>
using namespace std;
FaceProducts::FaceProducts()
{
	this->setName("Maybelline Foundation");
	this->setPrice(8.99);
	skinType = "dry";
}
FaceProducts::FaceProducts(string n, double p, string type)
{
	this->setName(n);
	this->setPrice(p);
	skinType = type;
}
void FaceProducts::setSkinType(string skinType)
{
	this->skinType = skinType;
}
string FaceProducts::getSkinType()
{
	return skinType;
}
void FaceProducts::display()
{
	cout << "Face Product: " << getName() << endl;
	cout << "Price: " << getPrice() << endl;
	cout << "Recommended Skin Types:" << getSkinType() << endl;
}