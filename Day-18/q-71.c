#include<stdio.h>
int main()
{
    int n, num;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&num);

    int low=0, high=n-1, mid;
    int found=0;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
        {
            printf("the element is found at index %d.",mid);
            found=1;
            break;
        }
        else if(arr[mid]>num)
        {
            high=mid-1;
        }
        else
        {
            high=mid+1;
        }

    }
    if(found==0)
    {
        printf("element not found.");
    }


}