#include<stdio.h>
int main()
{
    int n;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elemets of the array: \n");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];

        if(arr[i]<smallest)
        smallest=arr[i];

    }

    printf("the largest element of the array is %d\n", largest);
    printf("the smallest element of the array is %d\n", smallest);

    return 0;
}