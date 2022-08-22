#include <iostream>
using namespace std;
int main()
{
    int x, saal, maah, FullMaah, FullSaal, M1, M2, S1, S2;

    cin >> x;

    FullMaah=x%100;
    FullSaal=x/100;
    S1=FullSaal%10;
    FullSaal/=10;
    S2=FullSaal%10;

    if (S2!=0)
    {
        cout << "saal:" << S2 << S1 << "\n";
    }
    else
    {
        cout <<  "saal:" << 0 << S1 << "\n";

    }

    M1=FullMaah%10;
    FullMaah/=10;
    M2=FullMaah%10;

    if (M2!=0)
    {
        cout << "maah:" << M2 << M1;
    }
    else
    {
        cout <<  "maah:" << 0 << M1;

    }
    
    return 0;
}