#include<iostream>
using namespace std;
class Demo
{
    int i,ft,p,n;
    public:
    void get();
    void show();
  
} ;
void Demo::get()
{
    cout<<"N= ";
    cin>>n;
}
void Demo::show()
{
    ft=1;
    for(i=n;i>=1;i--)
    {
        ft=ft*i;
    }
    cout<<"Ans= "<<ft<<endl;
}
int main()
{
    Demo d1;
    d1.get();
    d1.show();

    
}