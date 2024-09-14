// 1. Write a program which search first occurence of particular element from singly linear linked list.

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
    int iCnt=0;

    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->Next;
    }
    return iCnt;
}

int SearchFirstOcc(PNODE Head, int iNo)
{
    int iRet=0;
    int iCnt=0;

    while(Head->Next !=NULL)
    {
        iRet++;
        if(Head->Data==iNo)
        {
            iCnt++;
            break;
        }
        Head = Head->Next;
    }

    if(iCnt==1 && iRet !=0)
    {
        return iRet;
    }
    else
    {
        return -1;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,30);

    Display(First);

    int iRet=0;
    int jRet=0;

    iRet=count(First);
    printf("Number of nodes are : %d\n",iRet);

    jRet=SearchFirstOcc(First,30);
    printf("First Occurence is : %d",jRet);


    return 0;
}