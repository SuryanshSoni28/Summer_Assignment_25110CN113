#include <stdio.h>
int binary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int num;
    printf("enter decimal value:");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0");
    }
    else
    {
        binary(num);
    }
    return 0;
}