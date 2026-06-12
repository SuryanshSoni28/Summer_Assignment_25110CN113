#include <stdio.h>
int main()
{
    int n;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int sec_largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }
    if (sec_largest == arr[0])
    {
        printf("No second largest element.\n");
    }
    else
    {
        printf("Second largest element: %d\n", sec_largest);
    }

        return 0;
    }