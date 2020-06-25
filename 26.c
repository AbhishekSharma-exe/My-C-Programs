// Adding two 2-D Matrices

#include <stdio.h>
int main()
{   int m,n;
    printf("Enter the no. of rows and columns for both Matrices: \n");
    scanf("%d %d",&m,&n);
    int a[m][n], b[m][n], result[m][n];

    // Taking input for 1st Matrix
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // Taking input for 2nd Matrix
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    // adding corresponding elements of two arrays
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    // Displaying the sum
    printf("\nSum Of Matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}