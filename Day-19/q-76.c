#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("emnter the number of rows and columns: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    printf("the sum of diagonal of matrix is: %d", sum);

    return 0;
}