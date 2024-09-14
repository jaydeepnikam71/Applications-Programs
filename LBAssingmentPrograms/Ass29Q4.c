// 4. Write a program which returns largest element from SinglyLL.

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

int Maximum(PNODE Head)
{
    int iRet=0;
    int iMax=0;
    
    while(Head !=NULL)
    {
        if(Head->Data > iMax)
        {
            iMax=Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;

    int iRet=0;
    int iAns=0;

    InsertFirst(&First,110);
    InsertFirst(&First,230);
    InsertFirst(&First,320);
    InsertFirst(&First,240);
    
    Display(First);

    iRet=count(First);
    printf("Number of nodes are : %d\n",iRet);

    iAns=Maximum(First);
    printf("Maximum element in LinkedList is : %d",iAns);

    return 0;
}