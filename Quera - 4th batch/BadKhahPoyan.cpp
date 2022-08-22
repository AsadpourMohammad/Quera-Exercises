#include <iostream>
using namespace std;
int main()
{
    int p, d;
    cin >> p >> d;

    for (int D = d ; ; D += d)
    {
        if ( (D % p) <= (p/2) )
        {
            cout << D;
            return 0;
        }
    }   
}