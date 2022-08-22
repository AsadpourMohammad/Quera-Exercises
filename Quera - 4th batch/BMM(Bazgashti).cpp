#include <iostream>
using namespace std;

void BMM(unsigned long long A, unsigned long long B);

int main()
{
    unsigned long long A, B;

    cin >> A >> B;

    BMM(A , B);
}

void BMM(unsigned long long A, unsigned long long B)
{
    unsigned long long R = A % B;

    if (R == 0)
    {
        cout << B;
    }
    else
    {
        BMM(B , R);
    }
}