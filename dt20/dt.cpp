#include<iostream>
using namespace std;
class Base
{

public:
   int a;
   Base(int x)
   {
    a=x;
   }

};
class Sub:public Base 
{
    public:
    int b;
    Sub(int x,int y):Base(x)
    {
        b=y;

    }
    void show()
    {
        cout<<"Sum= "<<(a+b)<<endl;
    }
};
int main()
{
    int k,p;
    cout<<"Enter The Value of K: ";
    cin>>k;
    cout<<"Enter the value of p: ";
    cin>>p;
    Sub s1(k,p);
    s1.show();
    return 0;

}
