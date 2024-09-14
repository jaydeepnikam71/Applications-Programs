//3. Accept N numbers from user and check wheather that numbers contains  11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount1=0, iCount2=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] ==11))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}    

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the %d elements\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the element %d : ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize);

    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}