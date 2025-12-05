
// Divyansh Tank, 0873CS241052, section "A"
//  Q.4- Addition of two matrix part 1
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    // Declare matrices
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    // Input elements of first matrix
    cout << "Enter elements of first matrix: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    // Input elements of second matrix
    cout << "Enter elements of second matrix: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the two matrices: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << sum[i][j] << " ";
        }
            cout << endl;
    }
    return 0;
}