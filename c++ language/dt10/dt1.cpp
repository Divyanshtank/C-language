//compile time polymorfisam
#include<iostream>
using namespace std;
class ODemo
{
    public:
    int sum (int x)
    {
        return(x+x);

    }
    int sum(int x, int y)
    {
        return(x+y);
    }
    int sum(int x,int y, int z)
    {
        return(x+y+z);
    }
};
int main()
{
    ODemo d1;
    cout<<"Sum= "<<d1.sum(9000)<<endl;
    cout<<"Sum= "<<d1.sum(9000,6000)<<endl;
    cout<<"Sum= "<<d1.sum(9000,2000,1000)<<endl;
    return 0;
}