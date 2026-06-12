#include <stdio.h>
int main()
{
    int n, num, count;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("the element is found at %d position.\n", i + 1);
            count = 1;
            break;
        }

        if (count == 0)
            printf("element not found.");
    }

    return 0;
}