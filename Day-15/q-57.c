#include<stdio.h>
int main()
{
    int n,temp;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("the reversed array is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}