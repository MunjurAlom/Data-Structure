
// Store / Retrieve an element into / form an array.
#include <stdio.h>
int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
