#include <iostream>
using namespace std;
class ConsDemo

{
public:
    int x, y;
    ConsDemo()
    {
        x = 5000;
    }
    ConsDemo(int a)
    {
        x = a;
    }
    ConsDemo(int a, int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Sum ="<<(x+x)<<endl;
    }
    void showl()
    {
        cout<<"Sum= "<<(x+y)<<endl;
    }
};
int main()
{
    ConsDemo d1;
    d1.show();

    int a,b;
    cout<<"A= ";
    cin>>a;
    ConsDemo d2(a);
    d2.show();
    cout<<"Value of A and B: ";
    cin>>a>>b;
    ConsDemo d3(a,b);
    d3.show1();
    return 0;
}