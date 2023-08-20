#include<iostream>
using namespace std; 



class dispenserType {
private : 
	int cost; // variable to hold the cost of item 
	int numberOfItems; // variable to hold the number of items 


public: 
	int getCost() const; 
	// Function to return the cost  
	//Postcondition: the value of  cash is returned 
	int getNumberOfItem() const; 
	// Function to return the numberOfItems
	//Postcondition: the vale of numberOfItems is returned 
	void makeSale(); 
	//Function to reduce the number of item by 1.
	//Postcondition: numberOfItem--; 

	dispenserType(); 
	//Default constructer 
	//Set the value of cost and numberOfItem = 50 
	dispenserType(int setCost , int setNumOfItem); 
	//Constructer with parameter 
	//Set the value of cost and numberOfItem to specific value 


};