#include <iostream>
using namespace std;
int main()
{
    int n, k, x, Sum = 0;

    cin >> n >> k;

    for (int i = 1; i <= n ; i++)
    {
        cin >> x;
        Sum += x;
    }

    if (Sum >= k)
    {
        cout << "YES";
    }
    else if (Sum < k)
    {
        cout << "NO";
    }
    
    return 0;
}