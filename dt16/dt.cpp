#include<iostream>
using namespace std;
class B;
class A
{
    int a1;
    friend void swap (A &p1,B &p2);
    public:
    void get()
    {
        cout<<"A= ";
        cin>>a1;
    }
    void show()
    {
        cout<<"A1= "<<a1<<endl;
    }

};
class B
{
 int b1;
 friend void swap (A &p1,B &p2);
 public:
 void get()

 cout<<"B1= ";
 cin>>b1;
 void show()
 {
    cout<<"B1= "<<b1<<endl;
 }
   
};
void swap(A &p1, B &p2)

{
int temp; 
temp=p1.a1;
p1.a1=p2.b1
p2.b1=temp;
}

int main()
{
    A t1;
    B t2;
    t1.get();
    t2.get();
    swap(t1,t2);
    t1.show();
    t2.show();
    return 0;

}