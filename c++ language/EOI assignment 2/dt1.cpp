// Divyansh Tank, 0873CS241052, section "A"
// Q.1 WAP to calculate the square & cube of a given number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;
    int cube = num * num * num;

    cout << "Square of " << num << " is: " << square << endl;
    cout << "Cube of " << num << " is: " << cube << endl;

    return 0;
}
