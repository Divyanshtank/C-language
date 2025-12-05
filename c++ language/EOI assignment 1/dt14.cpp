//Divyansh Tank, 0873CS241052, section "A"
// Q.14 part 1 find duplicate elements in an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }
    cout << endl;
    return 0;
}