#include <iostream>
using namespace std;

int main()
{
	double payAmount = 2200.0;
	double payPeriods = 26;
	
	cout << "Pay Amount = " << payAmount
	<<"\nPay Periods = " << payPeriods << "times.\n" << "-----------------------\n";
	
	double annualPay = payAmount * payPeriods;
	
	cout << "The total of the annual pay is "<< annualPay ;
	return 0;
}
