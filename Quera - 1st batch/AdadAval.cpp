#include<iostream>
using namespace std;
int main ()
{
    int a, b, Sum = 0;
    
    cin >> a >> b;

    for (int i = a; i <= b ; i++)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            if (i%j==0)
            {
                Sum+=j;
            }
            
        }

        if (Sum==i+1)
        {
            cout << i << "\n";
        }
        
        Sum=0;
    }
    
    return 0;
}
