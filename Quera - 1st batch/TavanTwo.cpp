#include <iostream>
using namespace std;
int main ()
{
    long int n, P=1;
    cin >> n;

    for (int i = 1; P < n; i++)
    {
        
        P = (P*2);
    }

    cout << P;

    return 0;   
}