#include <iostream>
using namespace std;
int main()
{
    int N, Sum;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            Sum += i;
        }
        
    }
    if (Sum == 2*N)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}