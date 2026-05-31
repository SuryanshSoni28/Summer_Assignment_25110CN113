#include<stdio.h>
#include<math.h>

int main()
{
    int n1, n2, i,temp, digits,sum, remainder;

    printf("enter the starting value of the range:");
    scanf("%d",&n1);

    printf("enter the last value of the range:");
    scanf("%d",&n2);

    for(i=n1; i<=n2; i++)
    {
      temp=i;
      digits=0;
      sum=0;

      while(temp!=0)
      {
        digits++;
        temp=temp/10;
      }
      temp=i;
      while(temp!=0)
      {
        remainder= temp%10;
        sum=sum+ (int)pow(remainder,digits);
        temp= temp/10;


      }
      if(sum==i)
      {
        printf("%d\n", i);
      }
    }

    return 0;
}