#include <stdio.h>
int add(int a, int b )
{   
    return a + b;
}
int main()
{   
    int a, sum, b;
    printf("enter the values of a and b:");
    scanf("%d,%d", &a, &b);
    printf("%d", sum = add(a, b));
   
}
