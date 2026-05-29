#include <stdio.h>
int main()
{
    int n, d, temp, rev=0;
    printf("enter the value of n:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }
    printf("the reverse of number %d id %d", n, rev);
    return 0;
}