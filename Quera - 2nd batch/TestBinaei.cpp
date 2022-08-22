#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string ActualWord, WrittenWord;
    cin >> ActualWord >> WrittenWord;

    int Mistakes = 0;

    for (int i = 0 ; i < n ; i++)
    {
        if ( ActualWord[i] != WrittenWord[i] )
        {
            Mistakes++;
        }
    }

    cout << Mistakes;
    
    return 0;
}