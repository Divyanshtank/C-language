#include<iostream>
using namespace std;
class Demo
{
    public:
    int foo (char p)
    {
        cout<<p;
        return 1;

    }
};
int main()
{
    int i=0;
    Demo d1;
       for(d1.foo('A');d1.foo('B') && i<3;d1.foo('C'))
       {
        d1.foo('D');
        i++;
       }
       return 0;
}