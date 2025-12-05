//Divyansh Tank, 0873CS241052, section "A"
// Q.10- second largest element in an array
#include <iostream>
using namespace std;   
int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int firstLargest = arr[0];
    int secondLargest = -1; // Initialize to -1 to handle cases where no second largest exists
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > firstLargest) 
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } 
        else if (arr[i] < firstLargest && (secondLargest == -1 || arr[i] > secondLargest)) 
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1) 
    {
        cout << "There is no second largest element." << endl;
    } 
    else 
    {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    return 0;

}