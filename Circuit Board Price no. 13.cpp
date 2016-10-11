#include <iostream>
using namespace std;

int main()
{
	double cost = 14.95;

	double profit = cost * 35 / 100;
	
	double sellingPrice = profit + cost;
	
	cout << "The selling price for the circuit board is $"<< sellingPrice;
	return 0;
}
