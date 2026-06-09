#include <stdio.h>
int fibonacci(int n)
{
    int a = 0, b = 1, temp;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main()
{
    int n;
    printf("enter the number of terms: ");
    scanf("%d", &n);

    printf("the fibonacci series is as follows\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}