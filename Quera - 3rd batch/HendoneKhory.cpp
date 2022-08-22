#include <iostream>
using namespace std;
int main()
{
    int n, W1, W, Answer = 1;

    cin >> n;

    cin >> W1;

    for (int i = 2; i <= n ; i++)
    {
        cin >> W;

        if ( W > W1 )
        {
            W1 = W;
            Answer = i;
        }
    }
    
    cout << Answer;

    return 0;
}