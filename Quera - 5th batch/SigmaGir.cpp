#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j , S=0;
    
    cin >> n >> m;

    for ( i = -10 ; i <= m ; i++ )
    {
        for ( j = 1 ; j <= n; j++ )
        {
            S += ((i+j)*(i+j)*(i+j))/(j*j);
        }
        
    }
    
    cout << S;
}