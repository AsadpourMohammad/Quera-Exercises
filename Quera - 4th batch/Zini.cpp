#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int chart[n][m];
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            cin >> chart[i][j];        
        }
    }


    int count = 0;

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < m-1 ; j++)
        {
            

            if ( ( chart[i-1][j] > chart[i][j] ) && ( chart[i][j] < chart[i+1][j] ) )
            {
                

                if ( (chart[i][j-1] < chart[i][j]) && ( chart[i][j] > chart[i][j+1]) )
                {
                    count++;
                } 
            }

            if ( ( chart[i-1][j] < chart[i][j] ) && ( chart[i][j] > chart[i+1][j] ) )
            {
                if ( ( chart[i][j-1] > chart[i][j] ) && ( chart[i][j] < chart[i][j+1] ) )
                {
                    count++;
                } 
            }
        }
    }
    
    cout << count;

    return 0;
}