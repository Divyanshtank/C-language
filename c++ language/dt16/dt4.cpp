// singal inheratance  
#include <iostream>
using namespace std;
class A
{
public:
int a;
A()
{
    a=9000;
}

};
class B : public A
{
public:
    void show()
    {
      
            cout << "val= " << a << endl;
}
   
};
int main()
{
    B b1;
    b1.show();
    return 0;

}