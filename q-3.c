#include <stdio.h>
int factrecursive(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factrecursive(n - 1);
    }
}
int main()
{
    int n, factorial;
    printf("enter the value of n:");
    scanf("%d", &n);

    factorial = factrecursive(n);
    printf("the factorial of %d is %d", n, factorial);

    return 0;
}