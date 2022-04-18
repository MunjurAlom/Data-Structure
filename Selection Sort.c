#include<stdio.h>
int main()
{
    int A[100],n,i,j,temp,small_index;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Elements of array are: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=1;i<=(n-1);i++)
    {
        small_index=i;
        for (j=i+1;j<=n;j++)
        {
            if (A[j]<A[small_index])
            {
                small_index=j;
            }
        }
        temp=A[i];
        A[i]=A[small_index];
        A[small_index]=temp;
    }
     printf("Sorted list:");
     for(i=1;i<=n;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;

}
