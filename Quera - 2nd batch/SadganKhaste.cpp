#include <iostream>
using namespace std;
int main()
{
    int n, m, N, M, SumN = 0, SumM = 0;

    cin >> n >> m;

    N = n;
    M = m;

    for (int i = 1; n > 0 ; i++)
    {
        SumN = (SumN*10) + (n%10);
        n /= 10;
    }

    for (int i = 1; m > 0 ; i++)
    {
        SumM = (SumM*10) + (m%10);
        m /= 10;
    }

    if ( SumN < SumM )
    {
        cout << N << " < " << M;
    }
    else if ( SumM < SumN )
    {
        cout << M << " < " << N;
    }
    else if ( SumN == SumM )
    {
        cout << N << " = " << M;
    }

    return 0;
}