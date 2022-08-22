#include <iostream>
using namespace std;
int main()
{
    int a, b , c , X;
    int x , R, P1 = 1, S1 = 0, S2 = 0 , P2 = 1, n , N[n], W = 0;

    
    cin >> a >> b >> c;

    for (int l = 1 ; (a < 1) || (b < 2) || (b > 11) ||  (c < 2) || (c > 11) ; l++ )
    {
        if ((a < 1))
        {
            cin >> a;
        }

        if ((b < 2) || (b > 11))
        {
            cin >> b;
        }
        
        if ((c < 2) || (c > 11))
        {
            cin >> c;
        }
        
        
    }

    for (int i = 1; a >= 1 ; i++)
    {
        R = a % 10;
        S1 += R*P1;
        a /= 10;
        P1 *= b;
    }

    for (int i = 0; S1 != 0 ; i++)
    { 
        R = S1 % c;
        N[i] = R;
        W += 1;
        S1 /= c;
    }

    for (int i = W-1 ; i >=0 ; i--)
    {   
        S2 += (N[i])*P2;
        P2 *= 10; 
    }

    X = S2;

    int Sum=0;

    int X_OG = X;

    for (int i = 1; X > 0 ; i++)
    {
        Sum = (Sum*10) + (X%10);
        X /= 10;
    }

    if (Sum == X_OG)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

}