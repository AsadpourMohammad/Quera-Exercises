#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int j = 0;

    char Word[20];

    cin >> Word;

    int length = strlen(Word);

    for (int i = 0; i < length; i++)
    {
        char RepeatedWord = Word[j];
        
        for (int q = 0; q <= j ; q++)
        {
            cout << RepeatedWord;
        }

        for ( int o = j+1 ; o < length ; o++)
        {
            cout << Word[o];
        }
        
        if (i != length-1)
        {
            cout << "\n";
        }
        
        j++;
    }
    
}