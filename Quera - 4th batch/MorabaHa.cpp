#include <iostream>
using namespace std;
int main()
{
    int n, k, x, Sum = 0;

    cin >> n >> k;

    for (int i = 0; i < n ; i++)
    {
        cin >> x;
        Sum += x;
    }

    int i;

    for ( i = 0 ; i < n ; i++ )
    {
        if ( k*i >= Sum )
        {
            break;
        }
    }

    cout << (n - i);
    
}