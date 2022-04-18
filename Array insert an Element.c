#include<stdio.h>
int main()
{
    int n,i,a[500],x,m;
    printf("Enter the number of size: ");
    scanf("%d",&n);
    printf("Enter any number: ");
    for (i=1;i<=n;i++)
        {
       scanf("%d",&a[i]);
    }
    printf("The position of insertion: ");
    scanf("%d",&m);
    printf("Enter the data: ");
    scanf("%d",&x);
    for (i=n;i>=m;i--)
    {
        a[i+1]=a[i];
    }
    a[m]=x;
    printf("The elements of updated array:");
    for (i=1;i<=n+1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
