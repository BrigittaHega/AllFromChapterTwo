#include <iostream>
using namespace std;

int main()
{
	float raise = 1.5;
	// The water raise 1.5 milimeters every year.
	float fiveYears = raise * 5;
	float sevenYears = raise * 7;
	float tenYears = raise * 10;
	// (number)Years represent how long the water raise happen.
	
	cout << "The rising of current ocean level in five years will be " << fiveYears << " milimeters" << endl;
	cout << "The rising of current ocean level in seven years will be " << sevenYears << " milimeters"<< endl;
	cout << "The rising of current ocean level in ten years will be " << tenYears << " milimeters";
	//The calculation will count the raise of ocean level every (number) years.
	return 0;
}
