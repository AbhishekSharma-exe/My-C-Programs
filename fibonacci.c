#include <stdio.h>
int main()
{
   int a = 0, b = 1, c, i, num;
   printf("enter the no. of digit of the fibonacci series:");
   scanf("%d", &num);
   for (i = 1; i <= num; i++)
   {
      printf("%d\t", a);
      c = a + b;
      a = b;
      b = c;
   }
   return 0;
}