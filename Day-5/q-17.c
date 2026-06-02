#include <stdio.h>
int main()
{
    int n, i, temp, sum = 0;

    printf("enter the value of n:");
    scanf("%d", &n);

    temp = n;

    for (i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.",n);
    }
    return 0;
}