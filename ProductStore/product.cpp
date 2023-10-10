#include "product.h"
 
Product::Product()
{
	this->id=34;
	this->title="Jasmine";
	this->price=100;
}

Product::Product(int id, string title){
	this->id=id;
	this->title=title;
	this->price=price;
}

Product::~Product()
{
}

int Product::GetId(){
    
    return this->id;
}

string Product::GetTitle(){  
       return this->title;
}
double Product::GetPrice(){
	return this->price;
}


void Product::SetTitle(string title){
	this->title=title;
	
void Product::SetPrice(double price){
		this->price=price;
	}
}
