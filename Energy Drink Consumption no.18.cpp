#include <iostream>
using namespace std;

int main()
{
	int survey = 16500;
	//It's how many people joined the survey
	int moreThanOne = survey * 15 / 100;
	//We want to count how many people buy more than one energy drinks
	int citrus = survey * 58 / 100;
	//citrus is the citrus-flavored energy drinks and we want to count how many people drink it
	
	cout << "Number of customers in the survey who purchase more than one or more energy drinks per week is " << moreThanOne << " people" << endl;
	cout << "Number of customers in the survey who prefer Citrus-flavored energy drinks is " << citrus << " people";
	return 0;
}
