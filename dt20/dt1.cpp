#include <iostream>
using namespace std;
class Base
{
public:
    int a[10], i, j, temp;
    void get()
    {

        for (i = 0; i < 10; i++)
        {
            cout << "Value= ";
            cin >> a[i];
        }
    }
};
class Mid : public Base
{
public:
    void pros()
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 1; j < 9; j++)
            {
                if (a[i] > a[j + 1])
                {
                    temp = a[i];
                    a[i] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
};
class Sub : public Mid
{
public:
    void show()

        for (i = 0; i < 10; i++)
    {
        cout << "Val= " << a[i] << endl;
    }
};
int main()
{
    Sub s1;
    s1.get();
    s1.pros();
    s1.show();
    return 0;
}