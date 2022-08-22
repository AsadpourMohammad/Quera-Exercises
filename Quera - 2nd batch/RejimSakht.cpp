#include <iostream>
using namespace std;
int main()
{
    string A;
    cin >> A;
    int G = 0, Y = 0, R = 0;

    for (int i = 0; i < 5; i++)
    {
        char x = A[i];
        if (x == 'R')
        {
            ++R;
        }
        else if (x == 'Y')
        {
            ++Y;
        }
        else if (x == 'G')
        {
            ++G;
        }
    }

     cout << Y << R << G;


    if ( (R >= 3) || ( (R >= 2) && (Y >= 2) ) || ( (R == 5) || (Y == 5) ) || ( (R == 1) && (Y == 4) ) )
    {
        cout << "nakhor lite";
    }
    else
    {
        cout << "rahat baash";
    }
    
    
    return 0;
}