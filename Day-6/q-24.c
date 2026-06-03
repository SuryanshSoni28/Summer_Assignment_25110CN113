#include<stdio.h>
int main()
{
    int i,x,n, value=1;
    printf("enter the value of x:");
    scanf("%d", &x);

    printf("enter the value of n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        value=value*x;
    }

    printf("the value is: %d", value);

    return 0;
}