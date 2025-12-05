#include <iostream.h>
#include <conio.h>
#include <dos.h>
int main()
{
    clrscr();
    int n, lt = 0, i;
    float rs = 0, ps=0;
    ps=106.77/100;
    gotoxy(10.10);
    cout << "Rs: ";
    cin >> n;
    for (i = 0; ;i++)
    {
        gotoxy(10, 12);
        cout << i << " ";
        rs=rs=ps;
            gotoxy(20, 12);
            cout << rs;
        
        delay(100);
        if (i == 100)
        {
            i=0;
            lt=lt+1;
            gotoxy(40,12);
            cout<<lt ;
        }
        if(rs>=n)
        {
            break;
        }
    }
    getch();
}