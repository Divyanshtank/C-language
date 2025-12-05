#include<iostream>
using namespace std;
class Demo
{
public:
char nm[20];
int i;
void get()
{
    cout << "String= ";
    cin >> nm;

}
void operator * (int n)
{
    for (i = 0; i < n; i++)
    {
        cout << nm << " ";
    }
}
};
int main()

    int t;
    OPDemo d1;
     d1.get();
    cout << "Number: ;
    cin >> t;
    d1.get();
    d1 * t;
    return 0;
}