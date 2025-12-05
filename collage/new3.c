#include<stdio.h>
#include<string.h>
void cpyster(char *,char *);
int main()
{
    char nm [20],sn[20];
    printf("NAme= ");
    gets(nm);

   // strcpy(sn,nm);
    printf("SN=%s",sn);
    return 0;

}
void cprystr (char *p,char *t)
{
int i;
while (*t!=NULL)
{
 *p=*t   /* code */
}


}