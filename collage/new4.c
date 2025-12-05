#include<stdio.h>
#include<string.h>

int main()
{
    char nm[20];
    printf("NAme=");
    gets(nm);
    n=strlen(nm);

    //cpystr(sn,nm);
    revstr(nm,n);
    //printf ("%d",strrev(nm));
    printf("%s",nm);
    return 0;

}
void revstr (char *p, int size)
{
char *k,temp;
int i;
k=p+ (size-1);
for (i=0;i<size/2;i++)
{
    temp=*k;
    *k=p;
    *p=temp;
    p++;
    k--;

}


}