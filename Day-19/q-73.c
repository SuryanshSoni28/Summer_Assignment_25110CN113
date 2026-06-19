#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr1[r][c];
    int arr2[r][c];
    int sum[r][c];

    printf("enter the elements of arr1: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("enter the elements of arr2: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("the summation of matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}