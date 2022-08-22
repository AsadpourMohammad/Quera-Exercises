#include <iostream>
#include <iomanip>

using  namespace std;

float a, b, c ,d;
float Sum, Average, Product, MAX, MIN;

float SumCheck();
float AverageCheck();
float ProductCheck();
float MAXCheck();
float MINCheck();

int main()
{
    setprecision(6);

    cin >> a >> b >> c >> d;

    SumCheck();

    AverageCheck();

    ProductCheck();

    MAXCheck();

    MINCheck();

    cout << "Sum : " << fixed << Sum << "\n" << "Average : " << fixed << Average << "\n" << "Product : " << fixed << Product << "\n" << "MAX : " << fixed << MAX << "\n" << "MIN : " << fixed << MIN;

    return 0;
}

float SumCheck()
{
    Sum = a + b + c + d;

    return Sum;
}

float AverageCheck()
{
    Average = Sum / 4;

    return Average;
}

float ProductCheck()
{
    Product = a * b * c * d;

    return Product;
}

float MAXCheck()
{
    MAX = a;

    if ( b > MAX )
    {
        MAX = b;
    }

    if ( c > MAX )
    {
        MAX = c;
    }

    if ( d > MAX )
    {
        MAX = d;
    }
    
    return MAX;
}

float MINCheck()
{
    MIN = a;

    if ( b < MIN )
    {
        MIN = b;
    }

    if ( c < MIN )
    {
        MIN = c;
    }

    if ( d < MIN )
    {
        MIN = d;
    }
    
    return MIN;
}