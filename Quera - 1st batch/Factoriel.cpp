#include<iostream>
using namespace std;
int main()
{
    int n, P=1;
    cin >> n;
    for (int i = 1;i <= n; i++)
    {
        P*=i;
    }
    cout << P;

    return 0;
}