#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    --n;

    long long int Height[200000];

    for (int i = 0; i <= n ; i++)
    {
        cin >> Height[i];
    }

    string LR;
    cin >> LR;

    for (int i = 0; i < m ; i++)
    {
        if ( LR[i] == 'R' )
        {
            int Main = Height[0];
            int a = 0;

            for (int j = 1; j <= n; j++)
            {
                if ( Height[j] > Main )
                {
                    ++Height[a];
                    ++a;
                    Main = Height[a];
                    j = a;

                    if ( a == n )
                    {
                        break;
                    }  
                }
                if ( j == n )
                {   
                    a += 1;
                    Main = Height[a];
                    j = a;
                }
            }
            
        }
        
        if ( LR[i] == 'L' )
        {
            int Main = Height[n];
            int a = n;

            for (int j = n-1 ; j >= 0 ; j--)
            {
                if ( Height[j] > Main )
                {
                    ++Height[a];
                    --a;
                    Main = Height[a];
                    j = a;

                    if ( a == 0 )
                    {
                        break;
                    }  
                } 
                if ( j == 0 )
                {   
                    a -= 1;
                    Main = Height[a];
                    j = a;
                } 
            }
        }
    }


    cout << Height[0];

    for (int i = 1; i <= n ; i++)
    {
        cout << " " << Height[i];
    }
    
    
    return 0;
}