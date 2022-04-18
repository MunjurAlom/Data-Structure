#include<stdio.h>
main()
{
    int n,i,x[50],sum_even=0,sum_odd=0;
    printf("Enter any inputs number:");
    scanf("%d",&n);
    printf("Entered number are:");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=1;i<=n;i++)
   {
   if(x[i]%2==0)
    {
        sum_even=sum_even+x[i];
    }
    else
    {
    sum_odd=sum_odd+x[i];
    }
    }
      printf("The summation of even number:%d\n",sum_even);
      printf("The summation of odd number:%d",sum_odd);
 }


