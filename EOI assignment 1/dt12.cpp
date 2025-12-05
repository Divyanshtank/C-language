// Divyansh Tank, 0873CS241052, section "A"
//  Q.12- check array is sorted or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    if (isSorted)
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "The array is not sorted in ascending order." << endl;
    }
    return 0;
}