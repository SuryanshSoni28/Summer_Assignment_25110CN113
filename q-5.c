#include <stdio.h>
int main()
{
    int n, rem, temp, sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        sum = sum + rem;
    }
    printf("the sum of digits in %d is %d", n, sum);
    return 0;
}