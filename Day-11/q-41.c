#include<stdio.h>
int sum_two(int a, int b)
{
    int sum;
    sum= a+b;
    return sum;
}

int main()
{
    int n1, n2;

    printf("enter two numbers: \n");
    scanf("%d %d", &n1, &n2);

    printf("the sum is: %d", sum_two(n1,n2));

    return 0;
}