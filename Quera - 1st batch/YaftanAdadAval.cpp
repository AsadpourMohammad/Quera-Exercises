#include <iostream>
using namespace std;
int main()
{
    int n, b=0;
    cin >> n;
    int N = n;
    for (int i = 1; n > 0; i++)
    {
        int R;
        R = n % 10;
        b += R;
        n /= 10;
    }


    int A = 0, j = ++N, Answer;
    for (int i = 1; i <= b ; i++)
    {

        for (j; A < 1; j++)
        {
            bool B = true;
        
            for (int q = 2; q < j; q++)
            {
                if ((j % q) == 0)
                {
                B = false;
                }
            }
        
            if (B == true)
                {
                    A = j;
                }
        }
        Answer = A;
        j = ++j;
        A = 0;
    }
    
    cout << Answer;
}