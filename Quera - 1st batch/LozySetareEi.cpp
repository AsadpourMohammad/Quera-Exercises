#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (n/2) ; i++)
    {
        for (int a = 1; a <= ((n/2)-(i-1)); a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int c = 1; c <= 2*((n/2)-(i-1)); c++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int a = 1; a <= ((n/2)-(i-1)); a++)
        {
            cout << " ";
        }
        cout << "\n";

    }

    for (int i = 1; i <=2*n ; i++)
    {
        cout << "*";
    }

    cout << "\n";

    for (int i = (n/2); i > 0 ; i--)
    {
        for (int a = 1; a <= ((n/2)-(i-1)); a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int c = 1; c <= 2*((n/2)-(i-1)); c++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 1 + (i-1)*2 ; b++)
        {
            cout << "*";
        }
        for (int a = 1; a <= ((n/2)-(i-1)); a++)
        {
            cout << " ";
        }
        cout << "\n";

    }
    
    return 0;
}