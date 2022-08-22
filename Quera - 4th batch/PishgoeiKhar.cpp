#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int count = 0;

    string Arayeshghar[n];
    string ArayeshgharAnswer[n];
    string Boz[m];

    for (int i = 0; i < n ; i++)
    {
        cin >> Arayeshghar[i] >> ArayeshgharAnswer[i];
    }

    for (int i = 0; i < m ; i++)
    {
        cin >> Boz[i];
    }

    for (int i = 0; i < m ; i++)
    {
        for (int j = 0 ; j < n ; j++ )
        {   
            if ( Boz[i] == Arayeshghar[j] )
            {
                cout << ArayeshgharAnswer[j] << " kachal! ";
                count++;
                break;
            }
            else if ( j == n-1 )
            {
                cout << "kachal! ";
                count++;
                break;
            }
        }
    }
}