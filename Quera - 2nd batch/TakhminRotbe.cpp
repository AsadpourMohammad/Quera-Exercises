#include <iostream>
using namespace std;
int main()
{
    long long int k, n;
    
    cin >> k >> n;

    long long int Vorodi[k];

    for (long long int i = 0; i < k ; i++)
    {
        cin >> Vorodi[i];
    }

    for ( long long int i = 0; i <= (n - k - 1) ; i++)
    {
        long long int temp = 0;
        
        for ( long long int j = 1 ; ; )
        {
            for (long long int q = 0; q < k ; q++)
            {
                if ( j == Vorodi[q] )
                {
                    j++;
                    break;
                }
                else if ( q == k-1 )
                {
                    temp = j;
                    break;
                }
            }

            if ( temp != 0 )
            {
                break;
            }
        }

        if ( i == ( n - k - 1 ) )
        {   
            cout << temp;
            return 0;
        }

        for (long long int u = 0; u < k; u++)
        {
            if ( u == k-1 )
            {
                Vorodi[u] = temp;
            }
            else
            {
                Vorodi[u] = Vorodi[u+1];
            }
        }

    }
    
    return 0;
}
