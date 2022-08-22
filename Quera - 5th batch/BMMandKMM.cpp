#include <iostream>
using namespace std;
int main()
{
    long n, m, A, B, R = 1;
    
    cin >> n >> m;

    A = n;
    B = m;

    for ( ; R != 0 ; )
    {
        R = n % m;
        if (R == 0)
        {
            cout << m << " " << (A*B)/m;
            return 0;
        }
        else
        {
            n = m;
            m = R;
        }  
        
    }
    
}