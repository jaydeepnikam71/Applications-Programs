// 5. Write a program which display addition of digits of element from SinglyLL.

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

void SumDigit(PNODE Head)
{
    int iDigit=0;
    int iSum=0;

    while(Head!=NULL)
    {
        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iSum=iSum + iDigit;
            Head->Data = Head->Data / 10;
        }
        printf("Addition of Digits of elements are : %d\n",iSum);
        Head=Head->Next;
        iSum=0;
    }
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

    SumDigit(First);

    return 0;
}