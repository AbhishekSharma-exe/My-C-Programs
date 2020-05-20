#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the number to get factorial:");
    scanf("%d",&n);
    while (n>0)
    {
        fact= fact*n;
        n--;
    }
    printf("%d",fact);
    
    return 0;
}