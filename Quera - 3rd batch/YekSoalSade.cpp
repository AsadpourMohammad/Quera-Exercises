#include <iostream>
using namespace std;

void print(int n);

int main()
{
    int n;
    cin >> n;

    print(n);
}

void print(int n)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        cout << "man khoshghlab hastam";

        if ( i != n)
        {
            cout << "\n";
        }
    }
}