// Swapping two numbers using call by reference
#include <stdio.h>
int swap(int *, int *);                                         // Function Prototype
int main()
{
    int a, b;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    printf("Before swapping: \n a = %d  b = %d \n", a, b);
    swap(&a, &b);
    printf("After swapping:  \n a = %d  b = %d \n", a, b);       // Function call
    return 0;
}

int swap(int *x, int *y)
{                                                               // Function defination
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}