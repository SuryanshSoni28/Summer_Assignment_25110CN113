#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array after removing duplicates: ");

    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}