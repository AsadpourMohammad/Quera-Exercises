#include<iostream>
#include <sstream>

using namespace std;
 
int main()
{
    string n;
    cin >> n;
    int end = n.length();
    for (int i=0 ; i < end ; i++)
    {
        char timesOld = n [i];
        std::string times(1, timesOld);
        stringstream degree(times);
        int x=0;
        degree >> x;
        cout << x << ": " ;

        for (int j = 1; j <= x; j++)
        {
            cout << times;
        }
        

        cout << "\n";
        
    }
    
}