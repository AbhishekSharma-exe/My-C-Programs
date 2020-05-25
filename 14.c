#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf("Before swapping:\n A=%d B=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping:\n A=%d B=%d",a,b);
    return 0;
}