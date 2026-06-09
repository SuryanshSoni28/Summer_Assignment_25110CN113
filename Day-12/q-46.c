#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int temp, remainder, digits = 0, sum = 0;

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + (int)pow(remainder, digits);
        temp = temp / 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    if (armstrong(n))
    {
        printf("the given number is an armstrong number.");
    }
    else
    {
        printf("the given number is not an armstrong number.");
    }
    return 0;
}