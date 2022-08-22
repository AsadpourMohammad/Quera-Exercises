#include <iostream>
using namespace std;

int counting = 0;

int Kcounting(int n , int k);

int main()
{
    int n, k;

    cin >> n >> k;

    Kcounting(n , k);

    cout << counting;

    return 0;
}


int Kcounting(int n, int k)
{
    for ( int i = k + 1 ; ; i += k )
    {
        counting++;
        if ( i > n )
        {
            i = i - n;
        }

        if ( i == 1 )
        {   
            break;
        }
    }

    return counting;
}