#include <iostream>
using namespace std;
int main()
{
    unsigned long long A, B, R = 1;
    
    cin >> A >> B;

    for ( ; R != 0 ; )
    {
        R = A % B;
        if (R == 0)
        {
            cout << B;
            return 0;
        }
        else
        {
            A = B;
            B = R;
        }
    }
    
}