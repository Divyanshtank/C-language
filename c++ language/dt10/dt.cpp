#include<iostream>
using namespace std;
class Demo
{
    //private:
    void m1()
    {
        cout<<"Hello Raj"<<endl;
    }
    protected:
    void m2()
    {
    m1();
        cout<<"Hi India"<<endl;
    }
public:
void m3()
{
    m2();
    cout<<"By Indore"<<endl;
}
};
int main()
{
    Demo d1,d2,d3;
    //d1.m1();
    //d2.m2();
    d3.m3();
    return 0;

}

