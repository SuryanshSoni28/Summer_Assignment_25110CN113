#include<stdio.h>
int fact_recursive(int n)
{
    int fact;

    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        fact= n*fact_recursive(n-1);
    }
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);

    printf("the factorial of number %d is %d", num, fact_recursive(num));

    return 0;
}