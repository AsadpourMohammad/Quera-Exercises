#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    int max=x;
    for (; n > 1; n--)
    {
        cin >> x;
        if ( max < x )
        {
            max=x;
        }
        
    }
    
    cout << max;
    return 0;
}