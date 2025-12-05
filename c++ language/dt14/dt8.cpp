#include<iostream>
using namespace std;
void swap(int &t, int &p)
{
    int k;
    k = t;
    t = p;
    p = k;

}
int main()
    {
        int a, b;
        cout << "A= ";
        cin >> a;
        cout << "B= ";
        cin >> b;
        swap(a, b);
        cout << "A= " << a << endl;
        cout << "B= " << b << endl;
   return 0;
    }

