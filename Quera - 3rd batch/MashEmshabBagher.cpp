#include <iostream>
using namespace std;

void TriangleChek(int a, int b, int c);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    TriangleChek(a , b , c);
}


void TriangleChek(int a, int b, int c)
{
    if ( ( (a + b + c) == 180 ) && (a > 0) && (b > 0) && (c > 0) )
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}