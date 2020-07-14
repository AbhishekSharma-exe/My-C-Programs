#include <stdio.h>
int fact(int number)
{
    if (number == 1 || number==0)
    {
        return 1;
    }
    else
    {
        return (number * fact(number - 1));
    }
}

int main()
{
    int num;
    printf("enter the number to get factorial:");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}