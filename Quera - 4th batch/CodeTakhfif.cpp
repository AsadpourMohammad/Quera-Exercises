#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string password;
    cin >> password;
    sort(password.begin(), password.end());
    auto last = password.end();
    for ( auto first = password.begin(); first != last; ++first )
    {
        last = remove( next( first ), last, *first );
    }
    password.erase( last, password.end() );
    
    for (int a = 0; a < n ; a++)
    {
        string temp;
        cin >> temp;
        sort(temp.begin(), temp.end());
        auto last = temp.end();
        for ( auto first = temp.begin(); first != last; ++first )
        {
            last = remove( next( first ), last, *first );
        }
        temp.erase( last, temp.end() );

        if ( temp.compare(password) == 0 )
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        
    }
    
    return 0;
}