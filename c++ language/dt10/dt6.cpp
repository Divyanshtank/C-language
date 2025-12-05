#include<iostream>
using namespace std;
int x=0; 
class Demo 

//int x=0; 

{
    public:
    Demo()
    {
        cout<<"Constructor Working"<< ++x <<endl;

    }
    ~Demo()
    {
        cout<<"Distructur Working"<< x-- <<endl;

    }
};
int main()
{
    Demo d1,d2,d3,d4;
    {
        cout<<"First Block Start\n";
        Demo d5,d6;
        cout<<"First Block Close\n";

    }
    {
        cout<<"Sec Block Start\n";
        Demo d7,d8;
        cout<<"Sec. Block Close\n";
    }
    cout<<"\nMain Function Close\n";
    return 0;
}