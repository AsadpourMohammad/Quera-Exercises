#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    
    long long int Seke[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> Seke[i];
    }

    long long int Answer[q], o = 0;

    for (long long int i = 1 ; i <= q ; i++)
    {
        char ask[] = "ask";
        char add[] = "add";

        char t[4];
        cin >> t;

        long long int l, r;
        cin >> l >> r;
        

        if ( strcmp (t , ask) == 0 )
        {   
            long long int S = 0;

            for ( long long int j = l-1 ; j < r ; j++ )
            {
                S += Seke[j];
            }
            
            Answer[o] = ( S % (1000000000 + 7) );
            o++;
        }


        if ( strcmp (t , add) == 0 )
        {
            for ( long long int j = l-1 ; j < r ; j++ )
            {
                Seke[j] += (j-l+2);   
            }
        }
    }
    
    for (long long int i = 0; i < o ; i++)
    {
        if ( i == 0)
        {
            cout << Answer[i];
        }
        else
        {
            cout << "\n" << Answer[i];
        }
        
    }
    

    return 0;
}