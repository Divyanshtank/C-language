//opertaer overloading
//coustmazation of operater
#include<iostream>
using namespace std;
class Demo
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
    cout<<"value= "<<a[i]<<endl;
}
}
void operator ++()
{
    for (i=0;i<10;i++)
    {
        a[i]++;
    }
}
};
int main()
{
    Demo d1;
    d1.get();
    ++d1;
    d1.show();
    return 0;

}
