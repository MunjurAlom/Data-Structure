#include<stdio.h>
int main()
{
    int A[100],temp,i,n,j;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Element of the array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=0;i<(n-1);i++)
    {
        for (j=0;j<(n-i-1);j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Sorted list:");
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
