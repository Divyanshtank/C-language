#include<stdio.h>
#include<string.h>
int cmpstr(char *p,char *t);
int main()
{
char nm[20],sn[20];
int n;
printf("NM= ");
gets(nm);
printf("SN= ");
gets(sn);
n=cmpstr(nm,sn);
printf("\nN=%d\n",n);
return 0;
}
int cmpstri(char *p,char *t);
{
    int n;
    while (*p !='\0' || *t!= '\0')
    {
        n*p - *t;
        if n!= && n!=32 && n!=-32
        {
            break;
        }
        p++;
        t++;
    }
    if (n==-32 || n==32)
    {
        n=0;
    }
    return n;
}