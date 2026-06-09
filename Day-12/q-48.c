#include <stdio.h>
int perfect_num(int n)
{
    int temp, sum = 0;

    temp = n;

    for (int i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    if (perfect_num(n))
        printf("the given number is a perfect number.");
    else
        printf("the given number is not a perfect number.");

    return 0;
}