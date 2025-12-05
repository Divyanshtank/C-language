#include<iostream>
using namespace std;

class dt2
{
private:
    int arr[10]; // Array to hold 10 values

public:
    // Constructor to initialize the array with 10 values
    dt2() {
        // Example values
        arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
        arr[5] = 6; arr[6] = 7; arr[7] = 8; arr[8] = 9; arr[9] = 10;
    }

    // Function to find and display odd values in the array
    void findOddValues() {
        cout << "Odd values in the array: ";
        for (int i = 0; i < 10; i++) {
            if (arr[i] % 2 != 0) { // Check if the value is odd
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    dt2 obj;
    obj.findOddValues(); // Find and display odd values
    return 0;
}
