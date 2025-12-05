#include<string.h>
#include<iostream>
using namespace std;
class OPDemo
{
public:
char a[5][20];
int i;
void get()
{
    for (i = 0; i < 5; i++)
    {
        cout << "Name= ";
        cin >> a[i];
    }
    

}
void show ()
{
    for (i = 0; i < 5; i++)
    {
        cout << "Name= " << a[i] << endl;
    }
}
OPDemo operator >= (OPDemo & t1)
{
    OPDemo p1;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strcmp(a[i], t1.a[i]) >= 0)
        {
           strcpy(p1.a[i], a[i]);
            
           }else{
            strcpy(p1.a[i],t1.a[i]);
        }
        
    }
    return p1;
}


};
int main()
{
    
    OPDemo d1,d2,d3;
    cout << "D1= " << endl;
     d1.get();
     cout << "D2= " << endl;
     d2.get();
    d3 = d1>=d2;
    d3.show();
    return 0;
}