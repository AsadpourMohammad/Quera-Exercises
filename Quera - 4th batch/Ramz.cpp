#include <iostream>
using namespace std;

int count = 0;

int CountFunction( int Code , string Charkhanak );

int main()
{
    int k;
    cin >> k;

    string Password;
    cin >> Password;

    string Charkhanak[k];
    for (int i = 0; i < k ; i++)
    {
        cin >> Charkhanak[i];
    }
    
    for (int i = 0; i < k ; i++)
    {
        int Code = Password[i];
        CountFunction( Code , Charkhanak[i]);   
    }

    cout << count;

    return 0;
}

int CountFunction( int Code , string Charkhanak )
{
    for (int i = 0; i < 9 ; i++)
    {
        if ( Charkhanak[i] == Code)
        {
            if ( i <= 4 )
            {
                count += i;
            }
            else
            {
                count += (9-i);
            }
        }
    }
    return -1;
}