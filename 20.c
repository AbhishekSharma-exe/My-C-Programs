#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no. of element(1-10) : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements inthe array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array of elements entered are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}