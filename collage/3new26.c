#include<stdio.h>
void uprstr(char n[]);
void lwrstr(char n[]);
void uprstr(char n[]);
void ctv (char n[]);

int main()
{
     char nm [20];
    int i;
    printf("Name= ");
    gets(nm);
    uprstr(nm);//calling upstr function
    printf("%s",nm);
    return 0;
}
void uprstr(char n[])
{
    int i;
    for (i=0;n[i] != '\0';i++)
    {
        if(n [i]>=97 && n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
    for (i=0;n[i] != '\0';i++)
    {
      if (n [i]>=65 && n[i]<=90)
        {
            n[i]=n[i]+32;
        }else
        if(n[i]>=97 && n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
}
void ctv (char n[])
{
    int j,a=0,e=0,i=0,o=0,u=0;
    for (j=0;n[j]!='\n';j++)
    {
        switch (n[j])
        {
        
            case 'a': a++;
            break;
            case 'e': e++;
            break;
            case 'i': i++;
            break;
            case 'o': o++;
            break;
            case 'u': u++;
            break;
        
       
        }
    }
    printf("A=%d\nE=%d\nI=%d\nO=%d\nU=%d\n",a,e,i,o,u);
}