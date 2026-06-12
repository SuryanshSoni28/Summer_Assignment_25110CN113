#include <stdio.h>
int main()
{
    int n, count;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the duplicate elements are as follows:\n");

    for (int i = 0; i < n; i++)
    {
        count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count != 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}