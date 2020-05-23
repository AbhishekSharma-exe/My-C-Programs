#include <stdio.h>
#include <math.h>
int main()
{

    float area, a, b, c, s;
    printf("Enter the sides of triangle:");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%f", area);
    return 0;
}