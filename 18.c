//Increment and decrement operators
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a value:");
    scanf("%d", &x);
    printf("Entered value is %d\n", x);
    printf("The value of x after Pre-increment (++x) operation is:%d\n", ++x);
    printf("The value of x after Pre-decrement (--x) operation is:%d\n", --x);
    printf("The value of x after Post-increment (x++) operation is:%d\n", x++);
    printf("The value of x after Post-increment (x--) operation is:%d\n", x--);
    printf("The final value of x after all above operation are:%d\n", x);

    return 0;
}