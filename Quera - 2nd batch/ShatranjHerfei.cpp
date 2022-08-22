#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A[6], B[6], C[6];

    for (int i = 0; i < 6 ; i++)
    {
        cin >> A[i];
    }

    B[0] = 1;
    B[1] = 1;
    B[2] = 2;
    B[3] = 2;
    B[4] = 2;
    B[5] = 8;

    

    for (int i = 0; i < 6 ; i++)
    {
        C[i] = B[i] - A[i];
    }
    
    for (int i = 0; i < 6 ; i++)
    {
        cout << C[i];

        if ( i != 5 )
        {
            cout << " ";
        }
        
    }

    return 0;
    
}