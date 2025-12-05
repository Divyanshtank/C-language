//Divyansh Tank, 0873CS241052, section "A"
// Q.8- calculate factorial of a matrix
#include <iostream>
using namespace std;
int main ()
{
    int n;
    int fact = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }
}