#include <iostream>
using namespace std;
int main()
{
    int n, fib[100];

    cin >> n;

    fib[0] = 1;
    fib[1] = 2;
    
    for (int i = 2 ; i < n ; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 1; i <= n ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if ( fib[j] == i)
            {
                cout << "+";
                break;
            }
            else if ( j == (n-1) )
            {
                cout << "-";
                break;
            }
            
        }
        
    }
    
    return 0;
}