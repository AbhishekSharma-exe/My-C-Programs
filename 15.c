#include <stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    (a > 0) ? (printf("%d is a positive number", a)) :((a<0)?(printf("%d is a negative number", a)):(printf("the number is zero")));

    return 0;
}