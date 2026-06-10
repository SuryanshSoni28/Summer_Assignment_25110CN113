#include <stdio.h>
int main()
{
    int n, average, sum = 0;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("the sum of the array is %d \n", sum);

    average = sum / n;

    printf("the average of the array is: %d", average);

    return 0;
}