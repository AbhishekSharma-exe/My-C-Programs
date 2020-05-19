#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area,circum;
    printf("enter the radius of circle: ");
    scanf("%d",&r);
    area=PI*r*r;
    circum=2*PI*r;
    printf("the area and circumference of circle is %f and %f",area,circum);
    return 0;
}