#include "FaceProducts.h"
#include <iostream>
using namespace std;
FaceProducts::FaceProducts()
{
	//setters from parent function to initialize 
	this->setName("Maybelline Foundation");
	this->setPrice(8.99);

	//default skin type for face products
	skinType = "dry";
}
FaceProducts::FaceProducts(string n, double p, string type)
{

	this->setName(n);
	this->setPrice(p);
	skinType = type;
}

//implementation for setter and getter
void FaceProducts::setSkinType(string skinType)
{
	this->skinType = skinType;
}
string FaceProducts::getSkinType()
{
	return skinType;
}

//the lay out for face products
void FaceProducts::display()
{
	cout << "Face Product: " << getName() << endl;
	cout << "Price: " << getPrice() << endl;
	cout << "Recommended Skin Types:" << getSkinType() << endl;
}