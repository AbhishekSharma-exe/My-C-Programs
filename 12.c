#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the principal amount,rate of interest and time in years:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("the simple interest is:Rs. %f",si);
    return 0;
}