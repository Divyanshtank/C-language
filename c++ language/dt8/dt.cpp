#include<stdio.h>
#include<conio.h>
int fact(int x);
int main()
{
    int n,ft;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    ft=fact(n);
    printf("\nAns=%d",ft);
}
int fact(int x)
{
    if(x==0)
    {
        return 1;
  }else{
    return(x* fact(x-1));
    }
}