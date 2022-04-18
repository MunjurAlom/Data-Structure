
#include <stdio.h>
int main()
{
    int A[100][100],m,n,i,j,sum=0;
    printf("Enter oder of the Matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter element are: ");
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 || j==1 || i==m || j==n)
            {
                sum=sum+A[i][j];
            }
        }
    }
            printf("The summation of boundary element are:%d",sum);
            return 0;
}
