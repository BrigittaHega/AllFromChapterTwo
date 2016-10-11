//Sales Production
//The East Coast division of company "generates" 58% of total sales.
//Write program that will predict how much East Cosast division will generate if the company has $8.6 million in sales this year

#include <iostream>
using namespace std;

int main()
{	
	int sales;
	cout << "Sales:" << endl;
	cin >> sales;
	float eastCoast = sales * 58 / 100;
	float left = (sales - eastCoast);
	
	cout << "East Coast:" << eastCoast << endl;
	cout << "What Left:" << left;
	return 0;
}
