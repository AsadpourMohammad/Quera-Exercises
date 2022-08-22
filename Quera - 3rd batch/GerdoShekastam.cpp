#include <iostream>
using namespace std;

int n, x, y, X, Y, i, j, check = 0;

int Answer();

int main()
{
    cin >> n >> x >> y;

    X = n / x;
    Y = n / y;

    Answer ();

    if ( check == 0 )
    {
        cout << i << " " << j;
    }
    else
    {
        cout << check;
    }
    
    

    return 0;
}

int Answer()
{
    for (i = 0; i <= X; i++)
    {
        for (j = 0; j <= Y; j++)
        {
            if ( i*x + j*y == n )
            {
                return 1;
            } 
        }
    }
    
    check = -1;
    return 1;
}