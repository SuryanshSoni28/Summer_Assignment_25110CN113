#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n"); // here n is a natural number
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("the sum of numbers upto %d is %d", n, sum);

    return 0;
}