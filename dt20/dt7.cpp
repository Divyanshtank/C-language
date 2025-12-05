#include<iostream>
using namespace std;
class Base
{
    public:
    void m1()
    {
        cout<<"Hello I'M M1"<<endl;
        }
};
class Sub:public Base
{
    public:
    void m1()
    {
        cout<<"Hi indore"<<endl;
    }
    void m2()
    {
        cout<<"HI I'M M2"<<endl;
    }
};
int main()
{
    Sub s1;
    s1.m1();
    s1.m2();
    return 0;
}
