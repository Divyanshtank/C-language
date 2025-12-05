#include<stdio.h>
void uprlwr(char n[]);
int main()
{
    char nm[20];
    int i;
    printf("Name =");
    gets(nm);
    uprlwr(nm);// calling uprster function
    printf("%s",nm);
    return 0;
}
void uprlwr(char n[20])
{
    int i;
    for (i=0;n[i]!='\0';i++)
    {
        if(n[i]>=65 && n[i]<=90)
        {
            n[i]=n[i]+32;
        }else
        if(n[i]>=97 && n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
    
}