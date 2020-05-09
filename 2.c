#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers:");
    scanf("%d,%d",&a,&b);
    for (int i =1; i <= b; i++)
    {
        a++;
    }
    printf("%d",a);
    return 0;
}
