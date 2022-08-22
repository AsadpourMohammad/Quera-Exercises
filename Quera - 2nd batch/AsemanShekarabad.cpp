#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char Sky[100][100];

    int n, m, Star = 0;

    cin >> n >> m;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cin >> Sky[i][j];

            if ( Sky[i][j] == '*')
            {
                Star += 1;
            }
        }
    }

    cout << Star;

    return 0;    
}