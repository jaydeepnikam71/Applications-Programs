//5. Accept N numbers from user and accept one another number as No, return frequency of No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;
    int iValue=0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number :\n ");
    scanf("%d",&iValue);

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

    iRet=Frequency(p,iSize,iValue);
    printf("Result is : %d",iRet);

    free(p);

    return 0;
}