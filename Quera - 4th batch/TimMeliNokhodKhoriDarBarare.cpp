#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int person[3][100];
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 100 ; j++)
        {
            person[i][j] = 10;
        }
        
    }
    
    for (int i = 0; i < 3 ; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int j = x-1; j < y-1 ; j++)
        {
            person[i][j] = 1;
        }
    }

    int Answer[] = { 0 , 0 , 0 };

    for (int j = 0; j < 100; j++)
    {
        if (person[0][j] + person[1][j] + person[2][j] == 21)
        {
            Answer[0]++;
        }
        else if (person[0][j] + person[1][j] + person[2][j] == 12)
        {
            Answer[1]++;
        }
        else if (person[0][j] + person[1][j] + person[2][j] == 3)
        {
            Answer[2]++;
        }
    }

    cout << 1*a*Answer[0] + 2*b*Answer[1] + 3*c*Answer[2];

    return 0;
}