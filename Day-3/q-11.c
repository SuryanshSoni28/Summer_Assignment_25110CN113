#include<stdio.h>
int main()
{
    int i,n1,n2,gcd;
    
    printf("enter the 1st value:");
    scanf("%d",&n1);

    printf("enter the 2nd value:");
    scanf("%d",&n2);

    gcd=1;

    for(i=1; i<=n1 && i<=n2; i++)
    {
      if(n1%i==0 && n2%i==0)
      gcd=i;
    }
    printf("the gcd of two numbers is: %d",gcd);
    return 0;
}