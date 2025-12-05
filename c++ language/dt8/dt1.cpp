//turbo
//#include<iostream.h>
//#include<conio.h>
//or
//Gcc
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    gotoxy(10,10);
    cout<<"Enter the value of A:";
    cin>>a;
    gotoxy(10,12);
    cout<<"Enter the value of B:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nA= "<<a;
    cout<<"\nB= "<<b;
    getch()
}