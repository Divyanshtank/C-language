#include <iostream>
using namespace std;
class Base
{

public:
    Base()
    {
        cout << "Base Working" << endl;
    }
};
class Sub : public Base
{
public:
    Sub()
    {
        cout << "Sub Working" << endl;
    }
};
class Demo : public Sub
{
public:
    Demo()
    {
        cout << "Demo Working" << endl;
    }
};
int main()
{
    Sub s1;
    Base b1;
    Demo d1;
    return 0;
}
