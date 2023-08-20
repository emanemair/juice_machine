
using namespace std;  


class cashRegister {
private: 
	int chashOnHand; // variable to stor the chas in the register 
public: 
	int getCurrentBalance() const; 
	//Function to show the current amount of money in the register 
	//Postcondition : the value if cashOnHand is returned 

	void acceptAmount(int amountIn); 
	//Function to receive the amount deposited by
   //the customer and update the amount in the register.
	//Postcondition : cashOnHand = cashOnHand + amountIn 


	cashRegister(); 
	//Default Constructer 
	//Sets the cash on the rejister to 100 JD  
	//Postcondition : cashOnHand = 500 

	cashRegister(int cahsIn); 
	//Constructer with parameter 
	//Set the cash on the register to a specific amount 
	//Postcondition : cashOnHand = cashIn 

};