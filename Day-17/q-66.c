#include <stdio.h>

int main()
{
    int n, m;

    printf("enter size of first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("enter elements of first array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("enter elements of second array:\n");
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("union of arrays: ");

    for(int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr1[i] == arr1[j])
            {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
        {
            printf("%d ", arr1[i]);
        }
    }
    for(int i = 0; i < m; i++)
    {
        int found = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
        {
            printf("%d ", arr2[i]);
        }
    }
    return 0;
}