#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,temp;

    printf("enter the number of terms:");
    scanf("%d",&n);

    printf("fibonacci series is as follows:\n ");

    for (i=0; i<n; i++)
    {
        printf("%d\n",a);
        temp=a+b;
        a=b;
        b=temp;

    }
    return 0;
}