//Code: Search a Particular element
#include <stdio.H>
int main()
{
int A[300],i,X,n,found,location;
    printf("Enter of number: ");
    scanf("%d",&n);
    printf("Entered number are:");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The Expected number are: ");
    scanf("%d",&X);
    found=0;
    for (i=1; i<=n; i++)
    {
        if (A[i]==X)
        {
            location=i;
        found++;
        break;
        }

    }
    if (found==0)
        printf("%d isn't present in the array.\n", X);
    else
       printf("%d is present at location %d.\n", X,location);
    return 0;
}
