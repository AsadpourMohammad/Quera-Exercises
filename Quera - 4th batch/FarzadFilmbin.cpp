#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
        
    string Movie[10];

    cin.ignore(1,'\n');

    for (int i = 0; i < n ; i++)
    {
        getline( cin , Movie[i] );
    }
    
    for (int i = 0; i < n ; i++)
    {
        int Length = Movie[i].length();

        int j = 0;
        

        for ( ; j < Length ; j++)
        {
            if ( ( Movie[i][j] >= 'A' ) && ( Movie[i][j] <= 'Z' ) )
            {
                Movie[i][j] += 32;
            }
            
            if ( ( Movie[i][0] >= 'a' ) && ( Movie[i][0] <= 'z' ) )
            {
                Movie[i][0] -= 32;
            }

            if ( Movie[i][j] == ' ' )
            {
                j++;
                if ( ( Movie[i][j] >= 'a' ) && ( Movie[i][j] <= 'z' ) )
                {
                    Movie[i][j] -= 32;
                }
            }   
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << Movie[i] << "\n";
    }
    
    
}