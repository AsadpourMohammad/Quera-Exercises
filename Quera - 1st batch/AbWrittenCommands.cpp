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

    i = 0; cout << "\n\n\n\n\n\n14 i = 0 : " << i << "\n";
    main1 = x[i]; cout << "15 main1 = x[i] : " << main1 << "\n";
    a = i; cout << "16 a = i : " << a << "\n\n\n";

    for (i+=1; i < n; i++)
    { cout << "19if i=1:" << i << " then we have begun 'for 18'. if not, 'i' is now :" << i << ", and we have repeat 'for 18' because i<n : " << i << "<" << n << ". So:\n\n";
        
        for (i; i < n; i++)
        { cout << "\t22 if i=1:" << i << " then we have begun 'for 21'. if not, 'i' is now :" << i << ", and we have repeat 'for 21' because i<n : " << i << "<" << n << ". So:\n\n"; 
            
            if (main1 == x[n-1])
            {
                cout << "\t\t\t26 'if 24' was correct. Meaning that the number just gets bigger each time.";
                    cout << "\t\t\t\t\t\t27 The buildings just keeps rising... So SumEnd is "<< SumEnd;
                    return 0;
            }
            
            if (main1 < x[i])
            { cout << "\t\t32 'if 31' correct. 'if (main1 < x[i]):(" << main1 << "<" << x[i] << ")' was correct. So:\n" ;
                cout << "\t\t\t33 main1 was " << main1 << ", now it is: "; main1 = x[i]; cout << "main1=x[i]: " << main1 << "\n";
                cout << "\t\t\t34 a was " << a << ", now it is: "; a = i; cout << "a=i: " << a << "\n\n";

                if (main1 == x[n-1])
                { cout << "\t\t\t36 'if 36' was correct. Meaning that the number just gets bigger each time.";
                    cout << "\t\t\t\t\t\t37 The buildings just keeps rising... So SumEnd is "<< SumEnd;
                    return 0;
                }
                
            }
            else
            { cout << "\t\t44 'if 31' wrong. 'if (main1 < x[i]):(" << main1 << "<" << x[i] << ")' was wrong. So:\n" ;
                cout << "\t\t\t45 main2 was " << main2 << ", now it is: "; main2 = x[i]; cout << "main2=x[i]: " << main2 << "\n";
                cout << "\t\t\t46 b was " << b << ", now it is: "; b = i; cout << "b=i: " << b << "\n\n";           
           
                for (i+=1; i < n; i++)
                { cout << "\t\t\t\t49 if i=2:" << i << " then we have begun 'for 48'. if not, 'i' is now :" << i << ", and we have repeat 'for 48' because i<n : " << i << "<" << n << ". So:\n\n";
                    
                    if (main2 < x[i])
                   { cout << "\t\t\t\t\t37 'if 51' correct. 'if (main2 < x[i]):(" << main2 << "<" << x[i] << ")' was correct. So:\n" ;
                       cout << "\t\t\t\t\t\t53 main2 was " << main2 << ", now it is: "; main2 = x[i]; cout << "main2=x[i]: " << main2 << "\n";
                       cout << "\t\t\t\t\t\t54 b was " << b << ", now it is: "; b = i; cout << "b=i: " << b << "\n\n";
                    }
                    if ((main2 > main1) && (Sum == 0))
                       { cout << "\t\t\t\t\t57 'if 56' is finally correct. Time to Sum. 'if (main2 > main1):(" << main2 << ">" << main1 << ")' was correct. So:\n" ;
                           cout << "\t\t\t\t\t\t58 main3 was " << main3 << ", now it is: "; main3 = main1; cout << "main3=main1: " << main1 << "\n\n";
                           for (int j = (b-1); j > a ; j--)
                           { cout << "\t\t\t\t\t\t\t60 if j=" << (b-1) << "=" << j << " then we have begun 'for 59' to count Sum. if less, then we have continued it again because j>a : " << j << ">" << a <<". \n";
                                cout << "\t\t\t\t\t\t\t\t61 The old Sum was " << Sum << ", main3=" << main3 << ", x[j]=" << x[j] << ". Now we have: " ; Sum += (main3 - x[j]); cout << "Sum = The old Sum + (main3 - x[j]) : " << Sum << ". \n\n";
                            }
                            break;
                       }
                    if ((main2 <= main1) && ( (i) == (n-1)) && (Sum == 0))
                       { cout << "\t\t\t\t\t\t\t66 'if 65' is finally correct. Time to Sum. 'if ((main2 <= main1):(" << main1 << "<=" << x[i] << ") && ( (i) == (n-1) ):(" << i << "==" << (n-1) << ")' was correct. So:\n" ;
                           cout << "\t\t\t\t\t\t\t\t67 main3 was " << main3 << ", now it is: "; main3 = main2; cout << "main3=main1: " << main1 << "\n\n";
                           for (int j = (b-1); j > a; j--)
                           { cout << "\t\t\t\t\t\t\t\t\t69 if j=" << (b-1) << "=" << j << " then we have begun 'for 68' to count Sum. if less, then we have continued it again because j>a : " << j << ">" << a <<". \n";
                                cout << "\t\t\t\t\t\t\t\t\t70 The old Sum was " << Sum << ", main3=" << main3 << ", x[j]=" << x[j] << ". Now we have: " ; Sum += (main3 - x[j]); cout << "Sum = The old Sum + (main3 - x[j]) : " << Sum << ". \n\n";
                            }
                            cout << "\t\t\t\t72end of 'for 48' and break.\n\n\n"; break;
                       } 
                    
                    
                } 
                cout << "\t77end of 'for 21' and break.\n\n\n"; break;
                
            } 
         

            
        }

        cout << "85 Another row Done. Sum at the moment is " << Sum << ", SumEnd was " << SumEnd << ", main1 was " << main1 << ", main2 was " << main2 << ", a was " << a << ", b was " << b << ", and i was " << i ; main1 = main2; a = b; i = b, SumEnd += Sum, Sum = 0; cout << ". Now, we main1=main2:" << main1 << ", a=b:" << a << ", i=b:" << i << ", SumEnd = SumEnd + Sum : " << SumEnd << ", Sum=0:" << Sum << ", and repeat until i = n. \n\n\n\n\n\n\n\n";

    
    }

    
        cout << "91 And now i is equal to n (" << i << "=" << n << ") and we have finished. Sum at the End is " << SumEnd;

} 