// Power function

#include <stdio.h>
#include<math.h>
int main()
{
    int number, power;
    long int result;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power raised to the number: ");
    scanf("%d", &power);
    result=pow(number,power);
    printf("%d^%d = %d ", number, power, result);
    return 0;
}