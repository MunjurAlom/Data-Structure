 //Liner Searching with multiple occurrence of an element.

 #include<stdio.h>
 int main()
 {
     int Array[1000],item,i,j,n,count=0;
     printf("Enter the size of array:");
     scanf("%d",&n);
     printf("Enter the elements of array:");
     for (i=0; i<n; i++)
     {
         scanf("%d",&Array[i]);
     }
     printf("Enter the search number:");
     scanf("%d",&item);
     for (j=0; j<n; j++)
     {
         if (Array[j]==item)
         {
             printf("\n%d Found and Location %d",item,j);
             count++;
         }
     }
     if (count==0)
     {
         printf("\n%d Not Found",item);
     }
     else
     {
         printf("\n%d Found and number of times:%d",item,count);
     }
     return 0;
 }
