#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the values of x and y:");
    scanf("%d %d",&x,&y);
    printf("before swapping:\n x=%d y=%d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After swapping: \n x=%d y=%d\n",x,y);
    return 0;
}