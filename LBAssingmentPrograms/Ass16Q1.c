//1. Accept N numbers from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
    int iRet=0;

    printf("Enter No. of elements : ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to provide Memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element No. %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Maximum(p,iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}