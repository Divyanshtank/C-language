#include<stdio.h>
void uprstr(char n[]);
int main()
{
    char nm[20];
    int i;
    printf("Name =");
    gets(nm);
    uprstr(nm);// calling uprster function
    printf("%s",nm);
    return 0;
}
void uprstr(char n[])
{
    int i;
    for (i=0;n[i]!='\0'; i++)
    {
        if(n[i]>=97 && n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
    
}