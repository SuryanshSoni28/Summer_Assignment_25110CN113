#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, temp, remainder, digits = 0, sum = 0;
    printf("enter the number:");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + (int)pow(remainder, digits);
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}