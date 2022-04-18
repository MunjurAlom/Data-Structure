 #include<stdio.h>
int main()
{
    int n,i,a[500],x,m;
    printf("Enter of number: ");
    scanf("%d",&n);
    printf("Enter any number: ");
    for (i=1;i<=n;i++)
        {
       scanf("%d",&a[i]);
    }
    printf("The position of dilation: ");
    scanf("%d",&m);
    if (m>=n+1)
    {
        printf("Deletion is not possible\n");
    }

    else
    {
        for (i=m;i<n;i++)
      {
        a[i]=a[i+1];
      }
    }
    printf("The elements of updated array:");
    for (i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
