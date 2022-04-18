#include<stdio.h>
int main()
{
    int A[100],n,i,j,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Element of the array are:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=1;i<=(n-1);i++)
    {
        j=i;
        while(j>0 && A[j-1]>A[j])
        {
            temp=A[j];
            A[j]=A[j-1];
            A[j-1]=temp;
            j--;
        }
    }
    printf("Sorted list:");
    for (i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
