#include <iostream>
using namespace std;
class A
{
public:
    void m1()
    {
        cout << "Hi students" << endl;
    }
};
class B : public A
{
public:
    void m2()
    {
        cout << " indore" << endl;
    }
};
class C : public A
{
public:
    void m3()
    {
        cout << "India" << endl;
    }
};
class D : public B, public C
{
public:
    void m4()
    {
        cout << "IM m4" << endl;
    }
};
int main()
{
    D d1;
    d1.m1();

    return 0;
}
