//Divyansh Tank, 0873CS241052, section "A"
// Q.15- check string is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    string str;
    int start, end;
    cout << "Enter a string: ";
    cin >> str;
    start = 0;
    end = str.length() - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        start++;
        end--;
    }
    {
        cout << "The string is a palindrome." << endl;
        return 0;
    }
    
}