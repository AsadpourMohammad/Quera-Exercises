#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string Name[100];
    string LastName[100];
    int count[n];

    for (int i = 0; i < n ; i++)
    {
        cin >> Name[i];
        cin >> LastName[i];
        count[i] = 0;
    }

    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if ( Name[i] == Name[j] )
            {
                count[i]++;
            }
        }
    }

    int max = count[0];

    for (int i = 1 ; i < n; i++)
    {
        if ( count[i] > max)
        {
            max = count[i];
        }
    }
    
    cout << max;

    return 0;
}