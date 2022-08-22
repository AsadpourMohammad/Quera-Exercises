#include <iostream>
using namespace std;

int a, b, hh, mm;

int Hour();
int Minute();

int main()
{
    cin >> a >> b;

    Hour();
    Minute();

    if ( hh >= 10 )
    {
        cout << hh << ":";
    }
    else
    {
        cout << "0" << hh << ":";
    }
    
    if ( mm >= 10 )
    {
        cout << mm;
    }
    else
    {
        cout << "0" << mm;
    }
    
}

int Hour()
{
    if ( a == 0 )
    {
        hh = 0;
    }
    else
    {
        hh = 12 - a;
    }
    
    return hh;
}

int Minute()
{
    if ( b == 0 )
    {
        mm = 0;
    }
    else
    {
        mm = 60 - b;
    }
    
    return mm;
}