#include <iostream>
using namespace std;

int main()
{
	float numGallons = 20;
	float averageTown = 23.5;
	float averageHighway = 28.9;
	
	float distance1 = numGallons * averageTown;
	float distance2 = numGallons * averageHighway;
	
	cout << "The distance the car can travel on one tank when driven to town is " << distance1 << " miles"<<endl;
	cout << "The distance the car can travel on one tank when driven to highway is " << distance2 << " miles";
	return 0;
}
