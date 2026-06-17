#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the size of both the array: ");
    scanf("%d %d", &n, &m);

    int arr1[n];
    printf("enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[m];
    printf("enter the elements of array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("intersection elements are: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}