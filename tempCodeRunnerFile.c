#include<stdio.h>
int main()
{
    int n,temp,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    printf("the number of digits in %d is %d", n, count);
    return 0;
}