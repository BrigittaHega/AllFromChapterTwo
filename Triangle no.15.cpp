#include <iostream>
using namespace std;

int main ()
{
	int period = 1;
    cout << "Triangle";
    cout << endl;
        
        for(int A = 1; A <= 6; A++)
        {
            for(int space = 5; space >= A; space--)
            {   
                cout << " ";
            }
                for(int B = 0; B < period; B++)
                {
                    cout << "*";
				}            
    
                period += 2;
                cout << endl;
        }
}
//Credits to Vincent
    
