#include <iostream>
using namespace std;
int MaghsomAlaihha = 0, SumMghsomAlaihha = 0;
int MaghsomAlaih(int a);
int main()
{
    int n;

    cin >> n;
    
    for (int i = 1 ; i <= n ; i++)
    {
        MaghsomAlaih(i);
    }
    
    cout << MaghsomAlaihha << " " << SumMghsomAlaihha;
}

int MaghsomAlaih(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if ( a % i == 0 )
        {
            MaghsomAlaihha++;
            SumMghsomAlaihha += i;
        }   
    }

    return 1;
}