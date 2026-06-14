#include <stdio.h>
int main()
{
    int n;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    printf("array after left shift: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}