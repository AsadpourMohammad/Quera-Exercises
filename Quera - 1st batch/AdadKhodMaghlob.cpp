#include <iostream>
using namespace std;
int main ()
{
    long int n, Sum=0;

    cin >> n;

    int N = n;

    for (int i = 1; n > 0 ; i++)
    {
        Sum = (Sum*10) + (n%10);
        n /= 10;
    }

    if (Sum == N)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}