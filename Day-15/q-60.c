#include <stdio.h>
int main()
{
    int n, count = 0;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n)
    {
        arr[count] = 0;
        count++;
    }
    printf("new array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}