#include <iostream>
using namespace std;

int r, c, a, b;

void Right();
void Left();

int main()
{
    cin >> r >> c;

    if ( c <= 10 )
    {
        cout << "Right ";
        Right();
    }
    else
    {
        cout << "Left ";
        Left();
    }
}

void Right()
{
    a = 11 - r;
    b = c;

    cout << a << " " << b;
}

void Left()
{
    a = 11 - r;
    b = 21 - c;

    cout << a << " " << b;
}