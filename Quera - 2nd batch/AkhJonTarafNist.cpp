#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int Person, FullDays;

    string PersonDays[7], FullDaysList[7];

    for (int i = 1 ; i <= 3 ; i++)
    {
        cin >> Person;

        for (int j = 0 ; j < Person ; j++)
        {
            cin >> PersonDays[j];
        }


        if (i == 1)
        {
            FullDays = Person;

            for (int j = 0; j < Person ; j++)
            {
                FullDaysList[j] = PersonDays[j];
            }
        }

        for (int j = 0 ; j < Person ; j++)
        {
            for (int q = 0; q < 7 ; q++)
            {
                if ( PersonDays[j] == FullDaysList[q])
                {
                    break;
                }
                
                if ( q == FullDays-1 )
                {   
                    FullDaysList[FullDays] = PersonDays[j];
                    FullDays += 1;
                    break;
                }
            }
        }

    }

    int Days = 7 - FullDays;

    cout << Days;

    return 0;
}