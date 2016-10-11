//Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
//stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
//•The amount paid for the stock alone (without the commission)
//•The amount of the commission
//•The total amount paid (for the stock plus the commission)

#include <iostream>
using namespace std;

int main()
{
	double stockShare = 750;

	double price = 35.00;
	
	double stockPaid = stockShare*price;
	
	cout << "The amount paid for the stock is $"<< stockPaid<<endl;
	
	double commission = stockPaid * 2 / 100;
	
	cout << "The amount of the commission is $"<< commission<<endl;
	
	double total = stockPaid + commission;
	
	cout << "The total amount paid is $"<< total<<endl;
	return 0;
}
