// 4. Write a program which returns second maximum element from SinglyLL.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int iCount=0;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->Next=NULL;
    newn->Data=iNo;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next=*Head;
        *Head = newn;
    }
    iCount++;
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are  : \n");

    while(Head!=NULL)
    {
        printf("| %d | ->",Head->Data);
        Head=Head->Next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    return iCount;
}

int SecMaximum(PNODE Head)
{
    int iMax1=0;
    int iMax2=0;
    int temp=0;

    while(Head!=NULL)
    {
        if(Head->Data > iMax1)
        {
            iMax2=iMax1;
            iMax1=Head->Data;
        }
        else if(Head->Data >iMax2)
        {
            iMax2 = Head->Data;
        }
        Head=Head->Next;
    }
    return iMax2;
}

int main()
{
    PNODE First = NULL;

    int iRet=0;
    int iMax=0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet=count(First);
    printf("Number of nodes are : %d\n",iRet);

    iMax=SecMaximum(First);

    printf("Secon Maximum elements is : %d",iMax);

    return 0;
}