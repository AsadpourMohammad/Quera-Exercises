#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int i=0, x[n], main1=0, main2=0, main3=0, a=0, b=0, Sum=0, SumEnd=0;

    for (i; i < n; i++)
    {
        cin >> x[i];
    }

    i = 0;
    main1 = x[i];
    a = i;

    for (i+=1; i < n; i++)
    {
        
        for (i; i < n; i++)
        {
            if (main1 < x[i])
            {
                main1 = x[i];
                a = i;

                if (main1 == x[n-1])
                {
                    cout << SumEnd;
                    return 0;
                }
                
            }
            else
            {
                main2 = x[i];
                b = i; 
           
                for (i+=1; i < n; i++)
                {
                    
                    if (main2 < x[i])
                   {
                       main2 = x[i];
                       b = i;
                    }
                    if ((main2 > main1) && (Sum == 0))
                       {
                           main3 = main1;
                           for (int j = (b-1); j > a ; j--)
                           {
                                Sum += (main3 - x[j]);
                            }
                            break;
                       }
                    if ((main2 <= main1) && ( (i) == (n-1)) && (Sum == 0))
                       {
                           main3 = main2;
                           for (int j = (b-1); j > a; j--)
                           {
                                Sum += (main3 - x[j]);
                            }
                            break;
                       } 
                    
                } 
                break;
                
            } 
         

            
        }

        main1 = main2; 
        a = b; 
        i = b, 
        SumEnd += Sum, 
        Sum = 0;

    
    }

    
    cout << SumEnd;

} 