#include <stdio.h>
int main()
{
    int r, c, count = 1;
    printf("emnter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("enter the elements of the array: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                count = 0;
                break;
            }
        }
    }
    if (count)
    {
        printf("the matrix is symmetric.\n");
    }
    else
    {
        printf("the matrix is not symmetric.");
    }
    return 0;
}