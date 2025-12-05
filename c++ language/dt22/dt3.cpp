#include <iostream>
using namespace std;
class Base
{
public:
    void m1()
    {
        cout << "M1 working" << endl;
    }
    virtual void m2()
    {
        cout << "M2 Working" << endl;
    }
    virtual void m3()
    {}
};
class Sub : public Base
{
    void m2()
    {
        cout << "Sub M2 Working" << endl;
    }
    void m3()
    {
        cout << "Sub M3 Working" << endl;
    }
};
int main()
{
    Base b1;
    Sub s1;
    Base *bs[2];
    bs[0] = &b1;
    bs[1] = &s1;

    bs[0]->m1();
    bs[0]->m2();
    bs[1]->m2();
    // bs[2]->m3();
    return 0;
}
