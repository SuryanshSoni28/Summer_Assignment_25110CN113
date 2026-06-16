#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elemets of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_freq = 0, element;

    for (int i = 0; i < n-1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > max_freq)
        {
            max_freq = count;
            element = arr[i];
        }
    }
    printf("the maximum frequency is %d of element %d.", max_freq, element);

    return 0;
}