#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    int count[t];

    for (int i = 0; i < t ; i++)
    {
        int x, y;
        cin >> x >> y;

        if ( (x == y) || (x == y+2) )
        {
            if ( x % 2 == 0)
            {
                count[i] = x + y;
            }
            else
            {
                count[i] = x + y - 1;
            }
        }
        else
        {
            count[i] = -1;
        }
    }

    for (int i = 0; i < t ; i++)
    {
        if ( i == 0 )
        {
            cout << count[i];
        }
        else
        {
            cout << "\n" << count[i];
        }
        
    }
    
    return 0;
}