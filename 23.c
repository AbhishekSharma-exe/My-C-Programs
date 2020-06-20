#include<stdio.h>
int main()
{
    int n,i,b;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array in reverse order is:\n");
    for (int i = 0; i < n/2; i++)
    {
        b=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=b;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}