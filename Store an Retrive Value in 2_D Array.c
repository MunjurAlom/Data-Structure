#include <stdio.h>
int main()
{
    int B[100][100],i,j,m,n;
    scanf("%d %d",&m,&n);
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=n; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("%d",B[i][j]);
        }
            printf("\n");
    }
    return 0;
}
