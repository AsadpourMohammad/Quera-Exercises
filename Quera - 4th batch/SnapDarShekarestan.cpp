#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    int Shekarestan[N][N];
    for (int i = 0; i < N ; i++)
    {
        for (int j = 0; j < N ; j++)
        {
            cin >> Shekarestan[i][j];
        }
    }

    int Count = 0;

    for (int i = 0; i < M ; i++)
    {
        int x, y;
        cin >> x >> y;

        Count += Shekarestan[x-1][y-1];
    }
    
    cout << Count;

    return 1;
}