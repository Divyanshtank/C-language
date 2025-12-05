#include<iostream>
using namespace std;
class demo
{
int x,y,z;
public:
void get()
{
    cout<<"Enter the Value of x and y: ";
    cin>>x>>y;

}
void pros()
{
    z=x;
    x=y;
    y=z;
}
void show()
{
cout<<"X= "<<x<<"\nY= "<<y<<endl;
}
};
int main()
{
    Demo d1,d2,d3;
    d1.get();
    d2.get();
    
    d1.pros();
    d3.pros();
    
    d1.show();
    d2.show();
    d3.show();

}

