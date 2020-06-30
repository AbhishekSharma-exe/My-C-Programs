#include <stdio.h>
int main()
{
    for (int i = 5; i >0; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
        {

            printf(" ");
        }
        for (int k = i; k >0 ; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}