#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
public:
    char nm[20];
    Demo(char n[])
    {
        strcpy(nm, n);
    }
};
class Base : public Demo
{
public:
    int sal;
    ;
    Base(char p[], int sl) : Demo(p)
    {
        sal = sl;
    }
};
class Sub : public Base
{
public:
    char post[20];
    Sub(char n[], int sal, char pst[]) : Base(n, sal)
    {
        strcpy(post, pst);
    }
    void show()
    {
        cout << "Nmae= " << nm << endl;
        cout << "Salary= " << sal << endl;
        cout << "Post= " << post << endl;
    }
};
int main()
{
    char n[20], de[20];
    int Salary;
    cout << "nm= ";
    cin >> n;
    cout << "sal=";
    cin >> Salary;
    cout << "post= ";
    cin >> de;
    Sub s1(n, Salary, de);
    s1.show();
    return 0;
}