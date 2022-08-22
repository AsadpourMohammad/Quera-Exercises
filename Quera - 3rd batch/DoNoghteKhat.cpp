#include <iostream>
using  namespace std;

void Check ( int a , int b , int c , int d );

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    Check(a , b , c , d);
}

void Check ( int a , int b , int c , int d )
{
    if ( a == c )
    {
        cout << "Vertical";
    }
    else if ( b == d )
    {
        cout << "Horizontal";
    }
    else
    {
        cout << "Try again";
    }
}