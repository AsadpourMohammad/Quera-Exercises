#include <iostream>
using namespace std;

int a, c, Person[4];

int Eating();

int main()
{
    for (int i = 0; i < 4 ; i++)
    {
        Person[i] = 0;
    }
    
    int b, d;

    cin >> a >> b >> c >> d;

    Eating();

    for (int i = 0; i < 4; i++)
    {
        if ( i == 0 )
        {
            cout << Person[i];
        }
        else
        {
            cout << " " << Person[i];
        }
    }
    
    return 0;
}

int Eating()
{
    int i = 0;

    while ( (a != 0) && (c != 0) )
    {
        Person[i]++;

        if ( i % 2 == 0 )
        {
            a--;            
        }
        else
        {
            c--;
        }
        
        if ( i == 3 )
        {
            i = -1;
        }

        i++;
    }   

    return 1;
}