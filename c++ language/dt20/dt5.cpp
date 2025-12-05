#include <iostream>
using namespace std;
class Base
{
public:
    char nm[20];
    void get()
    {
        cout << "NM= ";
        cin >> nm;
    }
};
class Copy : public Base
{
pubilc:

  Char sn[20]
  int i;
  void strcopy  
  {
       for (i=0;nm[i]!='\0';i++)
       {
        sn[i]=nm[i];
       }
       sn[i]='\0';
       cout<<"SN= "<<sn;
    }
};
 class Comp : public Base
 {
    public:
    char sn[20];
    int n,i;
    void strcomp()
    {
        cout<<"SN= ";
        cin>>sn;
        for(i=0;nm[i]!='\0' || sn [i]!='\0';i++)
        {
            n=nm[i]-sn[i];
            if (n!=0)
            {
                break;
            }

        }
    if (n==0)
    {
        cout<<"String's are equal"<<endl;
    }else{
        cout<<"Not equal"<<endl;
    }
    }

 };

 class Length : public Base
 {
    public:
    int i,n;
    void length()

    {
        n=0;
        for(i=0;nm[i]!='\0';i++)
        {
            n++;
        }
        cout <<"Length= "<<endl;
      
    }
 };
 int main()
 {
    Comp t1;
    t1.get
    t1.strcomp;
    Copy c1;
    c1.get
    c1.show
    return 0;
 
}

