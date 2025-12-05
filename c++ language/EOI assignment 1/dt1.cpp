
// Divyansh Tank, 0873CS241052, section "A"
// Q.1-reverse a string
#include <iostream>
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
    // Reverse the string in place
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << "Reversed string:" << str << endl;
    return 0;
}