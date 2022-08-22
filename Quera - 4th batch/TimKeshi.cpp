#include <iostream>
using namespace std;
int main()
{
    int a1, b1, a2, b2, a3, b3, Sum = 0;

    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if ( a1 < b1 )
    {
        Sum += a1;
    }
    else
    {
        Sum += b1;
    }

    if ( a2 < b2 )
    {
        Sum += a2;
    }
    else
    {
        Sum += b2;
    }
    if ( a3 < b3 )
    {
        Sum += a3;
    }
    else
    {
        Sum += b3;
    }
    
    cout << Sum;

    return 0;
}