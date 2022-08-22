#include <iostream>
using namespace std;
int main()
{
    long n, Q, s, k, Sum = 0;
    signed long int A[100000], B[100000];
    cin >> n;

    for (long i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }
    
    for (long i = 0 ; i < Q ; i++)
    {
        B[i] = 0;
    }
    
    
    cin >> Q;

    for (long q = 0 ; q < Q ; q++)
    {   
        cin >> s >> k;
        
        long Halghe = ((n-s)/k);

        for (long i = 0; i <= Halghe ; i++)
        { 
            Sum += A[((i*k)+s)-1]; 
        }
        B[q] = Sum;
        Sum = 0;
    }
    
    for (long i = 0; i < Q ; i++)
    {
        cout << B[i];

        if (i != (Q-1))
        {
            cout << "\n";
        }
        
    }
    
    return 0;
}