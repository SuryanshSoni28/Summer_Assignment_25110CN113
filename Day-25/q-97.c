#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j, k;
    printf("enter the size of arr1: \n");
    scanf("%d", &n1);

    int arr1[n1];
    printf("enter the elements of arr1: \n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("enter the size of arr2: \n");
    scanf("%d", &n2);

    int arr2[n2];
    printf("enter the elements of arr1: \n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;
    int arr3[n3];

    i = j = k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    printf("merged sorted array is: \n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}