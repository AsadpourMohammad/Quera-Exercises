#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char Soldier[n][n];
    int Sum[n], Max = 0, IofMax = 0;

    for (int i = 0; i < n ; i++)
    {
        Sum[i] = 0;

        for (int j = 0; j < n ; j++)
        {
            cin >> Soldier[i][j];
            if ( Soldier[i][j] == '1' )
            {
                Sum[i]++;
            }
            
        }
        
        if ( Sum[i] > Max )
        {
            Max = Sum[i];
            IofMax = i;
        }
    }

    int Count = 0, Guards[n];

    for (int I = 0, j = 0 ; I < n; I++)
    {
        for ( int i = IofMax ; j < n ; j++ )
        {
            if ( Soldier[i][j] == '0' )
            {
                Count++;
                Guards[I] = j;
                j++;
                break;
            }
        }
    }

    cout << Count;

    for (int i = 0; i < Count ; i++)
    {
        if ( i == 0 )
        {
            cout << "\n" << Guards[i];
        }
        else
        {
            cout << "\n" << Guards[i];
        }
    }
    
    return 0;
}