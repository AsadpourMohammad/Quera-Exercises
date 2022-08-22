#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n, m;
    cin >> n >> m;

    double BMI = n/(m*m);

    cout << fixed << setprecision(2) << BMI << endl;

    if ( BMI < 18.5 )
    {
        cout << "Underweight";
    }
    else if ( (BMI >= 18.5) && (BMI < 25) )
    {
        cout << "Normal";
    }
    else if ( (BMI >= 25) && (BMI < 30) )
    {
        cout << "Overweight";
    }
    else if ( BMI >= 30 )
    {
        cout << "Obese";
    }

    return 0;
}