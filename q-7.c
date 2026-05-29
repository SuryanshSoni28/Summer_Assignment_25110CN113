#include <stdio.h>
int main()
{
    int n, d, temp, pdt = 1;
    printf("enter the number:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        d = temp % 10;
        temp = temp / 10;
        pdt = pdt * d;
    }
    printf("the product of digits in %d is %d", n, pdt);
    return 0;
}