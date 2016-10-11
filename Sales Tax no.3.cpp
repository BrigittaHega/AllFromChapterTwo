#include <iostream>
using namespace std;

int main()
{
	int salesTax = 95;
	
	int stateSalesTax = salesTax * 4/100;
	int countySalesTax =  salesTax * 2/100;
	
	int totalSalesTax = stateSalesTax + countySalesTax;
	
	cout <<"The total salex tax the person has is $"<< totalSalesTax;
	
	return 0;
}
