#include <iostream>
using  namespace std;

void Temperature(int T);

int main()
{
    int T;
    cin >> T;
    
    Temperature(T);
}

void Temperature(int T)
{
    if ( T > 100 )
    {
        cout << "Steam";
    }
    else if ( T < 0 )
    {
        cout << "Ice";
    }
    else
    {
        cout << "Water";
    }
}