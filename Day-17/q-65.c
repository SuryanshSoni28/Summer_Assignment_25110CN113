#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the size of 1st and 2nd array:\n ");
    scanf("%d %d",&n,&m);

    int arr1[n];
    int arr2[m];
    printf("enter the elements of 1st array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("enter the elements of 2nd array:\n ");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int merged[n+m];

     for(int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < m; i++)
    {
        merged[n + i] = arr2[i];
    }

    printf("merged array: ");
    for(int i = 0; i < (n+m); i++)
    {
        printf("%d ", merged[i]);
    }
    return 0;
}