
//Divyansh Tank, 0873CS241052, section "A"
// Q.6- multiplication of two matrix
#include <iostream>
using namespace std;
int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    int matrix1[100][100], matrix2[100][100], product[100][100] = {0};
    cout << "Enter elements of first matrix: \n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix: \n";
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    // Multiply the matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the two matrices: \n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}