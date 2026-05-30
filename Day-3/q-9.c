#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("enter the number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("the given number is not a prime number");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            printf("the given number is not a prime number");
        }
        else
        {
            printf("the given number is a prime number");
        }
    }
    return 0;
}