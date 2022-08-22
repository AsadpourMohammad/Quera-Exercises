#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char Molana[] = "MOLANA";
    char Hafez[] = "HAFEZ" ;
    char Answer[5];
    int A = 0;

    for (int i = 1; i <= 5 ; i++)
    {
        char Text[20];
        cin >> Text;

        if ( strstr(Text , Molana) || strstr(Text , Hafez) )
        {
            Answer[A] = i;
            A++;
        }
    }

    if (A == 0)
    {
        cout << "NOT FOUND!";
    }
    else
    {
        for (int i = 0; i < A; i++)
        {
            int a = Answer[i];

            cout << a;

            if (i != A-1)
            {
                cout << " ";
            }
        }
    }
    
    return 0;
}