#include <iostream>
using namespace std;
class Demo
{
public:
    static int x[10];
    int i;
    void get()
    {
        for (i=0;i<10;i++)
    
    {
        cout << "Value= ";
        cin >> x;
    }
}
    void show()
    {
        for(i=0;i<10;i++)
        {
            cout<<"X= "<<x[i]<<endl;
        }
    }
};
int Demo::x[10];
int main()
{
    Demo d1, d2, d3;
    int i;
    cout<<"D1= "<<endl;
    d1.get();
    cout<<"D2= "<<endl;
    d2.get();
    for(i=0;i<10;i++)
    {
         Demo::x[i]=Demo::[i]+Demo::x[i];
    }
    
    d3.show();
    cout<<"Val X="<<Demo::X<<endl;
    return 0;
}