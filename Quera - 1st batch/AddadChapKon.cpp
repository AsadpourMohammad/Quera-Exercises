#include <iostream>
using namespace std;
int main()
{
    unsigned long int N, Sum=0;
    cin >> N;
    unsigned long int n = N;
    for (unsigned long int i = 1; N > 0 ; i++)
    {
        Sum = (Sum*10) + (N%10);
        N/=10;
    }
    
    for (unsigned long int i = 1; Sum > 0; i++)
    {
        unsigned long int R=Sum%10;
        cout <<R<<":"<<" ";
        for (unsigned long int J = 1; J <= R; J++)
        {
            cout <<R;
        }
        cout<< "\n";
        Sum/=10;
        
    }
    unsigned long int R=0;
    for (unsigned long int i = 1; R==0 ; i++)
    {
        R = n % 10;
        if (R==0)
        {
            cout << "0:"<<" "<<"\n";
        }
        n /= 10;
    }
    
    
    return 0;
}