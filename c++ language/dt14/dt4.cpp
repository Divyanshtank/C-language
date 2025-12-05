#include<iostream>
using namespace std;
class OPDemo
{
    public:
  int a[10],i;
    void get()
    {
        for (i=0;i<10;i++)
        {
        cout<<"Value= ";
        cin>>a[i];
    }
}
    void show ()
    {
        for (i=0;i<10;i++)
        {
        cout<<"Ans= "<<a[i]<<endl;
    }
}
OPDemo operator +(OPDemo & t1)
{
    OPDemo p1;
    int i;
    for (i=0;i<10;i++)
    {
        p1.a[i]=a[i]+t1.a[i];
    }
    return p1;
}
};
int main()
{
    OPDemo d1,d2,d3;
    cout<<"D1= "<<endl;
    d1.get();
    cout<<"D2= "<<endl;
    d2.get();
    d3=d1+d2;
    d3.show();
    return 0;
}