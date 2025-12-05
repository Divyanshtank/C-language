#include<stdio.h>
void lwrstr(char n[]);
int main()
{
    char nm[20];
    int i;
    printf("Name =");
    gets(nm);
    lwrstr(nm);// calling uprster function
    printf("%s",nm);
    return 0;
}
void lwrstr(char n[])
{
    int i;
    for (i=0;n[i]!='\0'; i++)
    {
        if(n[i]>=65 && n[i]<=90)
        {
            n[i]=n[i]+32;
        }
    }
    
}