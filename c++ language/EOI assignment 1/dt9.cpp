//Divyansh Tank, 0873CS241052, section "A"
// Q.9- average of elements in an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0, average;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr [100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];//add elements to sum
    }
    average = sum / n;
    cout << "Average of the elements in the array: " << average << endl;
    return 0;
}
  