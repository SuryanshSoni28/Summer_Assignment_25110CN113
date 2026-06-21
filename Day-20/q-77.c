#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    int arr1[r1][c1];

    printf("enter the elements of arr1: ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    int arr2[r2][c2];

    printf("enter the elements of arr2: ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("the product of matrix is: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d \n", arr3[i][j]);
        }
    }

    return 0;
}