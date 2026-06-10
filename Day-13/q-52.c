#include <stdio.h>
int main()
{
    int n, odd = 0, even = 0;
    printf("enter the space of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;

        else
            odd++;
    }

    printf("the number of even elements in the array are %d\n", even);
    printf("the number of even elements in the array are %d\n", odd);

    return 0;
}