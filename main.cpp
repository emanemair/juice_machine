#include"cash_register.h"
#include"dispenser_type.h"
using namespace std; 
void showSelection() ; 
//Function to welcome the customer and show them all items 
//Postcondition: welcoming customer , display for them how to select item , show the custome the list of item and how to terminate the program 

void sellProduct(dispenserType&, cashRegister&); 
//Function to check if the selected item's dispenser is not empty and sell product 
//Postcondition : if dispenser is empty , show message for the customer , else the makeSale and acceptAmount from customer 
int main()
{
	cashRegister counter(100) ; 
	dispenserType appleJuice(50 ,100); 
	dispenserType mangoJuice(50,100); 
	dispenserType orangeJuice(50,100); 
	int selection;

	showSelection(); 
	cin >> selection; 

	while (selection != 4)
	{
		switch (selection)
		{
		case 1 : 
			sellProduct(appleJuice, counter); 
			break; 
		case 2 : 
			sellProduct(mangoJuice, counter);
			break; 
		case 3 : 
			sellProduct(orangeJuice, counter);
			break; 
		default:
			cout << "Invalid selection." << endl; 
		}//end Switch 

		showSelection();
		cin >> selection;
	}// end while 


	return 0; 
}//end main 


void  showSelection() {

	cout << "Welcome to Bela's Juice Machine \n"; 
	cout << "We Offer you Three type of Juice : \n "; 
	cout << "To Select item , enter the number next to that item \n "; 
	cout << "1. Apple Juice \n "; 
	cout << "2. Mango Juice \n"; 
	cout << "3. Orange Juice \n "; 
	cout << "4. to exist \n"; 

}//end show Selction 


void sellProduct(dispenserType& product, cashRegister& counter)
{
	int amountIn; 
	int amountInHand; 
	if (product.getNumberOfItem() != 0)
	{
		cout << "Please deposit " << product.getCost() << " JD \n"; 
		cin >> amountIn; 
		amountInHand += amountIn; 
		while  (amountInHand < product.getCost()) {
			cout << "Please deposit another : " << product.getCost() - amountIn << endl; 
			cin >> amountIn;
			amountInHand += amountIn;
		}
		if (amountInHand >= product.getCost())
		{
			product.makeSale();
			counter.acceptAmount(amountInHand);
			cout << "Collect you item from bottom and enjoy \n"; 
		} 
	}
	else
	{
		cout << "Sorry , this item is sold out  \n" << endl; 
	}
}
