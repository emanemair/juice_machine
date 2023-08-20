#include"cahs_register.h"
#include"dispenser_type.h"
#include<iostream>

using namespace std; 


// start of class (cash_register) implementation 
int cashRegister::getCurrentBalance() const {
	return this->chashOnHand; 
}



void cashRegister::acceptAmount(int amountIn) {
	this->chashOnHand += amountIn; 
}


cashRegister::cashRegister() {
	this->chashOnHand = 100; 
}

cashRegister::cashRegister(int cashIn) { 
	this->chashOnHand  = (cashIn>=0) ? cashIn : 500;
}
// end  of class (cash_register) implementation 
// --------------------------------------------
// ----------------------------------------------
// 
// 
//start of class (dispenser_type) implementation 

int dispenserType::getCost() const {
	return this->cost; 
}

int dispenserType::getNumberOfItem()const {
	return this->numberOfItems; 
}

void dispenserType::makeSale() {
	this->numberOfItems--; 
}


dispenserType::dispenserType() {
	this->cost = 50; 
	this->numberOfItems = 50; 

}

dispenserType::dispenserType(int setCost, int setNumOfItems)
{
	this->cost = (setCost >= 0) ? setCost : 50; 
	this->numberOfItems = (setNumOfItems >= 0) ? setNumOfItems : 50; 
}

////end of class (dispenser_type) implementation 
