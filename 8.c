#include <stdio.h>
int main()
{
    int n;
    float a, b;
    printf("enter the conversion u want to perform:\n 1-miles into kilometers\n 2-kilograms into pounds\n 3-celsius into fahrenheit\n ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("enter the values in miles:\n");
        scanf("%f", &a);
        b = 1.6 * a;
        printf("the value in kilometers is %f", b);
        break;

    case 2:
        printf("enter the value in kg:\n");
        scanf("%f", &a);
        b = 2.205 * a;
        printf("the value in pounds is %f", b);
        break;
    case 3:
        printf("enter the value in celsius:\n");
        scanf("%f", &a);
        b = (a*1.8)+32;
        printf("the value in fahrenheit is %f",b);
        break;
        
            default : printf("error");
        break;
    }
    return 0;
}
