#include <stdio.h>
int main()
{
    int n, smallest_digit, largest_digit, i;
    printf("Enter the no. of element(1-10) : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array of elements entered are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    largest_digit = a[0];
    smallest_digit = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest_digit)
        {
            largest_digit = a[i];
        }
        else if (a[i] < smallest_digit)
        {
            smallest_digit = a[i];
        }
    }
    printf("\nThe largest digit in array is %d and the smallest digit in array is %d",largest_digit,smallest_digit);
    return 0;
}