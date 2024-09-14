//3. Accept N numbers from user and accept one another number as No, return index of last occurence of that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=iLength-1;iCnt>=0;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iCnt=0;
    int iSize=0;
    int iValue=0;
    int *p=NULL;
    int iRet=0;

    printf("Enter No. of elements : ");
    scanf("%d",&iSize);

    printf("Enter the Number : ");
    scanf("%d",&iValue);

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

    iRet=LastOcc(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurence of number is %d",iRet);
    }

    free(p);

    return 0;
}