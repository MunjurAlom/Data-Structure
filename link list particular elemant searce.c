#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define NULL 0
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    typedef struct node NODE;
    NODE *list, *tptr, *nptr, *cuptr, *pptr;
    list=0;
    int choice=1;
    // first= 0;
     while (choice)
    {
        nptr = (NODE *)malloc(sizeof(NODE));
        printf("Enter thedata item\n");
        scanf("%d",&nptr->data);
        if (list==0)
        {
            list=nptr;
            tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;

        }
        fflush (stdin);
        printf("Do you want to continue (Type 0 or 1)?\n");
        scanf("%d",&choice);
    }
    tptr->next=0;
    cuptr=list;
    printf("\n status of the linked list is \n");
    while (cuptr != 0)
    {
        printf("%d=>",cuptr->data);
        cuptr=cuptr->next;
    }
    printf("NULL\n");
    printf("\n Enter an item:");
    nptr=(NODE *)malloc(sizeof(NODE));
    scanf("%d",&nptr->data);
    nptr->next=NULL;
    pptr=list;
    // While (tptr->data!=nptr->)
    while((pptr->data != nptr->data) || (pptr!=NULL))
    {
        pptr=pptr->next;
    }


    if (pptr->data==nptr->data)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}

