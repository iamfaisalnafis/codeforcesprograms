#include <iostream>

using namespace std;
#define R1 4
#define C1 4
#define R2 4
#define C2 4

void matrixMultiplication (int mat1[][C1], int mat2[][C2])
{
    int result[R1][C2];
    cout << "Multiplication of the two given Matrices is:\n" << endl;
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < R2; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[R1][C1] = {
        { 2, 3, 4, 1 },
        { 4, 5, 6, 1 },
        { 7, 8, 9, 1 },
        { 1, 1, 2, 1 }
    };
    int mat2[R2][C2] = {
        { 1, 4, 7, 3 },
        { 2, 5, 8, 9 },
        { 3, 4, 5, 6 },
        { 3, 6, 9, 1 }
    };
    
    if (C1 != R2)
    {
        cout << "The number of columns in Matrix 1 must be equal to the number of rows in Matrix 2" << "\n";
        cout << "Please update the MACROs according to your dimension in the #define section" << "\n";
        exit(EXIT_FAILURE);
    }
    
    matrixMultiplication (mat1, mat2);
    return 0;
}
