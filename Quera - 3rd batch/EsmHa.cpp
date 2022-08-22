#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

string Word;

int n, Count[100000], j;

int countUniqueCharacters();
void FindMAX();

int main()
{
    cin >> n;

    for ( j = 0 ; j < n ; j++)
    {
        cin >> Word;
        countUniqueCharacters();
    }

    FindMAX();

    return 0;
}

int countUniqueCharacters()
{
    sort( Word.begin() , Word.end() );
    auto i = unique( Word.begin() , Word.end() );
    Count[j] = i - Word.begin();

    return 1;
}

void FindMAX()
{
    j = 0;

    int MAX = Count[0];

    for ( j = 1 ; j < n ; j++ )
    {
        if ( Count[j] > MAX )
        {
            MAX = Count[j];
        }
    }

    cout << MAX;
}