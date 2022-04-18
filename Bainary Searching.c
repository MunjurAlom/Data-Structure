 #include<stdio.h>
int main()
{
    int A[100],x,i,first,last,m,mid;
    printf("Enter the array size: ");
    scanf("%d",&m);
    printf("Enter the %d element are: ",m);
    for (i=1;i<=m;i++)
    {
        scanf("%d",&A[i]);
    }
    first=1,last=m;
    printf("Searching number are: ");
     scanf("%d",&x);
    while (first <=last)
    {
        mid=((first+last)/2);

        if (x==A[mid])
        {
            printf("%d is found at location:%d",x,mid);
            break;
        }
        else if (x<A[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
        if (first >last)
        {
            printf("%d Not Found",x);
        }

    return 0;
}
