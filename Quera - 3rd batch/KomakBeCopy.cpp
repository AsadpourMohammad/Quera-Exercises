#include <iostream>
#include <string.h>
using namespace std;
char File[2000];
string CopyOfVirus();
int main()
{
    int n;
    cin >> n;
    cin >> File;

    for (int i = 1; i <= n ; i++)
    {
        CopyOfVirus();
    }
    
    cout << File;
}
string CopyOfVirus()
{   
    
    char CopyOf[2000] = "copy of ";
    strcat( CopyOf , File );
    strcpy( File , CopyOf );

    return string(File);
}