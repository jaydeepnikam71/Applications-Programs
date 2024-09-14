// 2. Write a program which displays all elements which are prime number from SinglyLL.

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

void DisplayPrime(PNODE Head)
{
    int iCount=0;
    int iCnt=0;

    while(Head!=NULL)
    {
        for(iCnt=2;iCnt<(Head->Data);iCnt++)
        {
            if((Head->Data) % iCnt ==0)
            {
                iCount++;
            }
        }

        if(iCount==0)
        {
            printf("Prime Number are : %d\n",Head->Data);
        }
        iCount=0;
        Head=Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    int iRet=0;
    int iAns=0;

    InsertFirst(&First,89);
    InsertFirst(&First,23);
    InsertFirst(&First,7);
    InsertFirst(&First,17);
    InsertFirst(&First,3);
    InsertFirst(&First,5);

    Display(First);

    iRet=count(First);
    printf("Number of nodes are : %d\n",iRet);

    DisplayPrime(First);

    return 0;
}