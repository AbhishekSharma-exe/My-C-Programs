#include <stdio.h>
int main()
{
    int n, i, mul;
    printf("enter the number of which u want the table:");
    scanf("%d", &n);
    printf("the table of %d is :\n", n);
    for (i = 0; i < 11; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}