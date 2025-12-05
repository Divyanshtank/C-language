#include<iostream>
using namespace std;
class Demo
{
    public:
    virtual void m1()=0;

};
class DD: public Demo 
{
    public:
    void m1()
    {
        cout<<"M1 Working"<<endl;
    }
};
int main()
{
    //Demo d1;
    DD d2;
    d2.m1();
    return 0;
}