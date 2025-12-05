#include<stdio.h>
#include<string.h>
int main()
{
 char nm[20];
 int n 
 printf("Name= ");
 gets(nm);
 n=lenster(nm);
 printf("Length of String =%d",n);
}
 int lenster(char *p)
 {
    int i,ct =0;
    while (*p !='\0')
    {
      ct++;
      p++;
    }
    
  
    return ct;
 }

