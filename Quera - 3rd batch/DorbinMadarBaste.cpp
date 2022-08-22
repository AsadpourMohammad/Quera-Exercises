#include <iostream>
using namespace std;

int x[4], y[4];

int X4();
int Y4();

int main()
{
    for (int i = 0 ; i < 3 ; i++)
    {
        cin >> x[i] >> y[i];
    }
    
    X4();
    Y4();

    cout << x[3] << " " << y[3];
}

int X4()
{

    for (int i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 3; j++)
        {
            if ( (i != j) && (x[i] == x[j]) )
            {
                break;
            }
        }
        if (j == 3)
        {
            x[3] = x[i];
            break;
        }
    }
    
    return x[3];
}

int Y4()
{
    for (int i = 0; i < 3; i++)
    {
        int j;
        
        for (j = 0; j < 3; j++)
        {
            if ( (i != j) && (y[i] == y[j]) )
            {
                break;
            }
        }
        if (j == 3)
        {
            y[3] = y[i];
            break;
        }
    }

    return y[3];
}