#include <stdio.h>
int check_prime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    int num;

    printf("enter the number:");
    scanf("%d", &num);

    check_prime(num);
    if (check_prime(num))
        printf("number is prime.");
    else
        printf("number is not prime.");

    return 0;
}