#include <stdio.h>
int main()
{
    int x[300],i,n,large;
    printf("Enter of number: ");
    scanf("%d",&n);
    printf("The number of entered are: ");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
     large=x[1];
    for(i=2;i<=n;i++)
    {
        if (x[i]>large)
            large=x[i];
    }
    printf("The largest number:%d",large);
    return 0;
}
