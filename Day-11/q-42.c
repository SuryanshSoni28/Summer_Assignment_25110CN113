#include<stdio.h>
int maximum(int n1, int n2)
{
    if(n1>n2)
    return n1;
    else
    return n2;
}

int main()
{
    int num1, num2;
    printf("enter the two numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("the maximum is: %d", maximum(num1, num2));

    return 0;
}