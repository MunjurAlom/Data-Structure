#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter any number:");
   scanf("%d",&n);
   printf("The excepted number are: ");
   for (i=1;i<=n;i++)
   {
       if (i%7==0 && i%5!=0)
        printf("%d\n",i);

   }
   return 0;
}
