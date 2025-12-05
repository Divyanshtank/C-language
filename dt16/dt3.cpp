// singal inheratance  
#include <iostream>
using namespace std;
class A
{
protected:
    int a[10], i;

public:
    void show()
    {
        for (i = 0; i < 10; i++)
        {
            cout << "value= ";
            cin >> a[i];
        }
    }
};
class B : protected A
{
public:
    void show()
    {
        get();
        for (i = 0; i < 10; i++)
        {
            cout << "val= " << i[a] << endl;
        }
    }
};
int main()
{
    A b1;
    b1.show();
    return 0;
}