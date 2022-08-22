#include <iostream>
#include<iomanip>
#include <math.h>

using namespace std;

double CinMatrix(double Matrix[10][10], double n);
double Determinant(double Matrix[10][10], double n);
double InputSubMatrix(double SubMatrix[10][10] , double Matrix[10][10] , double n, double CoFactor);

int main()
{
    int n;
    cin >> n;

    double Matrix[10][10];
    CinMatrix(Matrix , n);

    double Answer = Determinant( Matrix, n);

    cout << setprecision(2) << fixed << Answer;

    return 0;
}

double CinMatrix(double Matrix[10][10], double n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    return Matrix[10][10];
}

double Determinant(double Matrix[10][10], double n)
{
    double FinalDet = 0;
    double SubMatrix[10][10];

    if ( n == 2 )
    {
        return ( (Matrix[0][0]*Matrix[1][1]) - (Matrix[0][1]*Matrix[1][0]) );
    }
    else
    {
        for (int CoFactor = 0 ; CoFactor < n ; CoFactor++)
        {
            InputSubMatrix( SubMatrix , Matrix , n , CoFactor);
            FinalDet += pow( -1 , CoFactor ) * Matrix[0][CoFactor] * Determinant( SubMatrix , n-1 ); 
        } 
    }

    return FinalDet;
}

double InputSubMatrix(double SubMatrix[10][10] , double Matrix[10][10] , double n , double CoFactor)
{    
    for (int i = 1 , SubI = 0 ; i < n ; i++)
    {
        for (int j = 0 , SubJ = 0 ; j < n ; j++)
        {
            if ( j == CoFactor )
            {
                continue;
            }

            SubMatrix[SubI][SubJ] = Matrix[i][j];
            SubJ++;
        }
        SubI++;
    }
    
    return SubMatrix[10][10];
}