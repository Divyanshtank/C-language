//Divyansh Tank, 0873CS241052, section "A"
// Q.13 find length of string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int length = 0;
    // Input the string
    cout << "Enter a string: ";
    cin >> str;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << "Length of the string: " << length << endl;
    return 0;
}