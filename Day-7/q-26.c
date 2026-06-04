#include <stdio.h>
int fib_recursive(int n)
{
    int a, b, i, temp;

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}
int main()
{
    int num, i;
    printf("enter the total number of terms:");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("%d ", fib_recursive(i));
    }

    return 0;
}