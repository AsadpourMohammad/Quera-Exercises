#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string Sentence[100];

    for (int i = 0; i < n; i++)
    {
        cin >> Sentence[i];
    }
    
    for (int i = n-1; i >= 0 ; i--)
    {
        cout << Sentence[i];

        if ( i != 0 )
        {
            cout << " ";
        }
        
    }
    
    return 0;
}