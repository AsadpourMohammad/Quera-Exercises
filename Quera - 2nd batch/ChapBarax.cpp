#include <iostream>
using namespace std;
int main()
{
    int A[1000];

    for (int i = 0; i < 1000 ; i++)
    {
        cin >> A[i];

        if (A[i] == 0)
        {
            for ( i ; i < 1000 ; i++)
            {
                A[i] = 0;
            }
            
            break;
        }
    }

    for (int i = 999 ; i >= 0; i--)
    {
        if ( A[i] != 0)
        {
            cout << A[i] << endl;
        }
    }
    
    return 0;
}