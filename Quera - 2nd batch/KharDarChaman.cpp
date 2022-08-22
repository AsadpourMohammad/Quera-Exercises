#include <iostream>
using namespace std;
int main()
{
    int a, b, l, Sum = 0;

    cin >> a >> b >> l;

    for (int i = 0; i < l ;)
    {

        Sum += a;
        ++i;

        if (i == l)
        {
            break;
        }
        
        Sum += b;
        ++i;
        
    }
    
    cout << Sum;

    return 0;
}