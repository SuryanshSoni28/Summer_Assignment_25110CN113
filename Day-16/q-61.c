#include <stdio.h>
int main()
{
    int n, sum = 0;
    int total_sum, missing;

    // numbers are natural numbers from 1 to n.

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    total_sum = n * (n + 1) / 2;
    missing = total_sum - sum;
    printf("the missing term is %d", missing);

    return 0;
}