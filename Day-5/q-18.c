#include <stdio.h>
int fact(int n)
{
    int fact, i;

    for (i = 1; i < n; i++)
    {
        fact = n * (n - i);
    }
}
int main()
{
    int i, num, rem, temp, sum = 0;

    printf("enter the value of the number:");
    scanf("%d", &num);

    temp = num;

    for (i = 1; i < temp; i++)
    {
        rem = temp % 10;
        temp = temp / 10;
        sum = sum + fact(rem);
    }

    if (sum == num)
    {
        printf("%d is a strong number.", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }

    return 0;
}