#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int I = 0, J = 0, i = 1;

    for (int count = 0; count < n-1 ; count++ )
    {
        if ( i % 2 != 0 )
        {
            if ( count % 2 == 0 )
            {
                I += i;
            }
            else
            {
                J += i;
                i++;
            }
        }
        else
        {
            if ( count % 2 == 0 )
            {
                I -= i;
            }
            else
            {
                J -= i;
                i++;
            }
        }
    }
    
    cout << I << " " << J;

    return 0;
}