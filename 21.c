#include <stdio.h>
int main()
{
    int n,avg,sum=0,i;
    printf("Enter the no. of element(1-10) : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array of elements entered are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\n");
    printf("The sum of elements of array is %d\n",sum);
    printf("The average of the elements of array is %d ",avg);
    return 0;
}