#include <stdio.h>
int main()
{
    int n, num, count = 0;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element whose frequency is to be found: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            count++;
    }

    printf("the frequency of %d id %d", num, count);

    return 0;
}