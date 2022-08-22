#include <iostream>
using namespace std;
int i = 0, PrimeNumbers[200];
int Aval(int &N);
void Print();
int main()
{
    int a, b;
    cin >> a >> b;
    for (int N = a+1 ; N < b ; N++)
    {
        N = Aval(N);
        if (N < b)
        {
            PrimeNumbers[i] = N;
            i++;
        }
        
    }

    Print( );
}

int Aval(int &N)
{
    int Answer = 0;

    for ( ; Answer == 0 ; )
    {
        for (int q = 2; q < N ; q++)
        {
            if ( N % q == 0 )
            {
                N += 1;
                q = 1;
            }
            
        }
        
        Answer = N;
    }

    return N;
}

void Print()
{
    for (int j = 0; j < i; j++)
    {
        cout << PrimeNumbers[j];

        if (j != i-1 )
        {
            cout << ",";
        }
    }
}