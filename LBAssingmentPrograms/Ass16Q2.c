//2. Accept N numbers from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    iRet=Minimum(p,iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}