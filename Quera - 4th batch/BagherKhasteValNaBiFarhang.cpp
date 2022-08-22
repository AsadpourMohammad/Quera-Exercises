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

        if ( d == 0 )
        {
            time += r;
        }
        
        if ( d == l )
        {
            time += ( l - beginning );
            cout << time;
            return 0;
        }
        
        time += (d - beginning);

        bool check = false;
        
        int red = 0;
        int green = 0;
        for ( int j = 1 ; check == false ; )
        {
            red = green + r;
            for (  ; j <= red ; j++ )
            {
                if ( j == time )
                {
                    time += ( red - j );
                    check = true;
                    break;
                }
            }
 
            if ( check == false )
            {
                green = red + g;
                for (  ; j <= green ; j++ )
                {
                    if ( j == time )
                    {
                        check = true;
                        break;
                    }
                }
            } 
        }

        beginning = d;
    }
    
    time += ( l - beginning );

    cout << time;
}