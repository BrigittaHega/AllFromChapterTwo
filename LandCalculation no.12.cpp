#include <iostream>
using namespace std;

int main()
{
	double squareFeet1 = 43560;
	double squareFeet2 = 391876;
	
	cout << "One acre is equivalent to "<<squareFeet1 << " feet"<< endl
	<<"What is the number of acres if it is "<<squareFeet2 << " feet?"<<endl;
	
	double acres = squareFeet2 / squareFeet1;
	
	cout << "The number of acres in this area is "<< acres<<" feet";
	return 0;
}
