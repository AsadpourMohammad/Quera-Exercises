#include <iostream>
using namespace std;
int main()
{
    long int n, Sum=0, R;
    cin >> n;
    for (int i = 1; n > 0 ; i++)
    {
        R = n % 10;
        Sum = Sum + R;
        n /= 10;

        if ((n<1)&&(Sum>9))
        {
            n = Sum;
            Sum = 0;
        }
        
    }

    cout << Sum;

    return 0;
    
}