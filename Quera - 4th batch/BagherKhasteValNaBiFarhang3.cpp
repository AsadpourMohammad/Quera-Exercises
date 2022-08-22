#include <iostream>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;

    int time = 0, beginning = 0;

    for (int i = 0; i < n ; i++)
    {
        
        int d, g, r;
        cin >> d >> r >> g;

        time += (d - beginning);

        for ( ; time % ( r + g ) < r ; )
        {
            time++;
        }
        

        beginning = d;
    }

    time += ( l - beginning );
    
    cout << time;
}