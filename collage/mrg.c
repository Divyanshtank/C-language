#include<stdio.h>
void mrg(int *,int *,int*);
int main()
{
    int a[5], b[5], c[10],i;
    for (i=0;i<5;i++)
    {
        printf("Value=");
    scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("value =");
        scanf("%d",&b[i]);
    }
    sort (a,5);
    sort(b,5);
    mrg(a,b,c);
    for (i=0;i<10;i++)
    {
        printf("Val=%d\n",c[i]);
    }
    return 0;
}

void mrg (int *p,int *t,int *k)
{
    int i;
    for (i=0;i<10;i++)
    {
        if (*p<*t)
        {
            *k=*p;
            k++;
            p++;
            
        }else{
            *k=*t;
            t++;
            k++;
        }
    }
}