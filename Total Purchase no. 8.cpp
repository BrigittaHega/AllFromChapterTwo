#include <iostream>
using namespace std;

int main()
{
	double price1 = 15.95;
	double price2 = 24.95;
	double price3 = 6.95;
	double price4 = 12.95;
	double price5 = 3.95;
	
	cout << "The price(s): \n$"
	<<price1 << endl
	<<"$"<<price2 << endl
	<<"$"<<price3 << endl
	<<"$"<<price4 << endl
	<<"$"<<price5 << endl;
	
	cout << "--------------------------------\n";
	
	double subTotal = price1 + price2 + price3 + price4 + price5;
	
	cout << "Subtotal: $"<< subTotal << endl;
	
	double total = subTotal * 7/ 100;
	
	cout << "Total: $"<< total;
	return 0;
}
