#include <stdio.h>
void ctv(char nm[]);
int main()
{
    char nm[20]; int j;
 
    printf("Name= ");
    gets(nm);
    ctv(nm);
    printf("%s", nm);
    return 0;
}
void ctv(char nm[])
{
    
    int j, a=0,i=0,e=0, o=0, u=0;
    int n;
    for (j=0;nm[j] !='\0';j++)
    {
        switch (nm[j])
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }
    printf("%d\n", a);
    printf("%d\n", e);
    printf("%d\n", i);
    printf("%d\n", o);
    printf("%d\n", u);
    
}