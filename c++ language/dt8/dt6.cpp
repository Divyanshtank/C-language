#include<iostream>
using namespace std;
int a=5000;
int main()
{
    int a=3000,b;
    {
      b=a;
      int a=2000;
      cout<<"A= "<<a<<endl;//2000
      cout<<"B= "<<b<<endl;//3000
      cout<<"::A= "<<a<<endl;//5000
    }
    cout<<"A= "<<a<<endl;//3000
    cout<<"::A= "<<a<<endl;//5000



}