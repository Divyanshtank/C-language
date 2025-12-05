//Divyansh Tank, 0873CS241052, section "A"
//Q.11- sort an array in desending order
#include <iostream>
using namespace std;
int main()
{
int n;
cout <<  " Enter the  number of element inn the array: ";
cin >> n;
int arr [100]; 
cout << " Enter the elements of the array: ";
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
cout << " Sorted array in desending order: ";
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
cout << endl;
return 0;
}