#include <iostream>
using namespace std;
int main()
{
    int X, N;
    
    cin >> X >> N;

    if ( N == 0 )
    {
        cout << "20";
        return 0;
    }

    if ( N == 7 )
    {
        cout << X;
        return 0;
    }

    for (int i = 1 ; i <= N ; i++)
    {
        --X;
    }
    
    if ( X < 0)
    {
        cout << "0";
    }
    else
    {
        cout << X;
    }

    return 0;
    
}