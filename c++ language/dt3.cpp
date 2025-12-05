#include<iostream>
#include<conio.h>
#include<dos.h>
int main()
{
  clrscr ();
  int i, h=0, m=0;
  for (i=0; ;i++)
  {
    gotoxy(10,12);
    cout<<i<<" ";
    delay(10);
    if(i==60)
    {
        i=0;
        m=m+1;
        gotoxy(20,12);
        cout<<m;
        if(m==60)
        {
            i=0
            h=h+1;
            gotoxy(30,12);
            cout<<h;
            if(h==24)
            {h=0;
            }
        }
    }
    if(kbhit())
    {
        break;
    }
  }//loop
  
  
}