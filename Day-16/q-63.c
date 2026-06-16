#include <stdio.h>
int main()
{
    int n;
    int sum, found = 0;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     printf("enter sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("the founded pair is %d and %d\n.", arr[i], arr[j]);
                found++;
            }
        }
    }
    if (found == 0)
    {
        printf("no pair found.");
    }
    return 0;
}