#include <iostream>
using namespace std;
int main()
{
    int n , Sum = 0;
    cin >> n;

    int Seke[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> Seke[i];
        Sum += Seke[i];
    }

    int height = Sum/n;

    Sum = 0;

    for (int  i = 0; i < n ; i++)
    {
        if ( height > Seke[i] )
        {
            Sum += ( height - Seke[i] );
        }
    }
    
    cout << Sum;

    return 0;
}