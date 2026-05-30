#include <stdio.h>
int main()
{
    int i, n1, n2, gcd, lcd;
    printf(" enter the value of 1st number:");
    scanf("%d", &n1);

    printf(" enter the value of 2nd number:");
    scanf("%d", &n2);

    gcd = 1;
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcd = (n1 * n2) / gcd;
    printf("the lcd of two numbers %d and %d is %d", n1, n2, lcd);

    return 0;
}