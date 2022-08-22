#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= ((2*n+1)/2) ; i++)
    {
        for (int a = 1; a <= (((2*n+1)/2)-(i-1)); a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int c = 1; c <= (((2*n+1)/2)-(i-1)); c++)
        {
            cout << " ";
        }
        cout << "\n";

    }

    for (int i = 1; i <= (2*n+1) ; i++)
    {
        cout << "*";
    }

    cout << "\n";

    for (int i = ((2*n+1)/2); i > 0 ; i--)
    {
        for (int a = 1; a <= (((2*n+1)/2)-(i-1)); a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int c = 1; c <= (((2*n+1)/2)-(i-1)); c++)
        {
            cout << " ";
        }
        cout << "\n";

    }
    
    return 0;
}