#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	int num2;
	char var1; 
	char var2;
	
	char arr[20];
	
	
	cin >> num1 
	>>num2;
	
	cin >> var1
	>>var2;
	
	cout << "---------------------------\n";
	
	int total = num1+ num2;
	
	for (int i = 0; i<10; i++)
	{
		
		int numtot = total + (i*5);
		cout << numtot<<endl;
	}
	
	int total2 = var1 + var2;
	
	for (int i =1; i <= 10; i++)
	{
		 for(int space = 9; space >= i; space--)
            {   
                cout << " ";
            }
			for (int j = 1; j <= i;j++)
				{
					cout << var1 << ""<<var2;
				}
		cout <<endl;
		if (i%2 == 0)
		{
			arr[i] = var1;
		}
		else
		{
			arr[i] = var2;
		}
//	arr[i-1] = var1;
//	arr[i] = var2;
	}
//	char arr[20] = {total, total2};
//	for (int j = 1; j <20; j++)
//	{
//		if (j == 0)
//		{
//			arr[j] = var2;
//		}
//		else
//		{
//			arr[j-1] = var1;
//		}
//	}
//	for (i=1; i<=10; i++)
//	{
//		cout << var[i];
//	}
}
