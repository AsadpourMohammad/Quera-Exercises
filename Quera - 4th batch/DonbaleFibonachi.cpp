#include <iostream>
using namespace std;

void ShowFibNth(long int N , long int M);

int main()
{
    long int N, M;

    cin >> N >> M;

    ShowFibNth( N , M );
}

void ShowFibNth(long int N, long int M)
{
    if ( N != 0)
    {
        cout << N << "\n";
        ShowFibNth( M-N , N );
    }
}
