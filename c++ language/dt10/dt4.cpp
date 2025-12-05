#include<iostream>
using namespace std;
class ConsDemo

{
    public:
int x;
ConsDemo()
{
    x=5000;

}

};
int main()
{
    ConsDemo obj[10];
    int i;
    for (i=0;i<10;i++)
    {
        cout<<"X= "<<obj[i].x<<endl;

    }
    return 0;
}