#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,temp;

    printf("enter the nth term:");
    scanf("%d",&n);

    printf("fibonacci series is as follows:\n ");

    if (n == 0) {
        printf("The %dth Fibonacci term is %d", n, a);
        return 0;
    }
    for (i=2; i<=n; i++)
    {
        temp=a+b;
        a=b;
        b=temp;

    }
    printf("the %d term of series is %d",n,b);
    return 0;
}