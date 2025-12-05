//Divyansh Tank, 0873CS241052, section "A"
//Q.10 Write a recursive fn. to calculate power of a number.
#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << " raised to the power " << exponent << " is: " << power(base, exponent) << endl;
    return 0;
}