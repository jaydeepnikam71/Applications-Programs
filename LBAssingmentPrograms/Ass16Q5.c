//5. Accept N numbers from user and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        while(Arr[iCnt] !=0)
        {
            iDigit=Arr[iCnt] % 10;
            iSum=iSum+iDigit;
            Arr[iCnt]=Arr[iCnt] / 10;
        }
        printf("%d\t",iSum);
        iSum=0;
    }
    
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

    DigitsSum(p,iSize);

    free(p);

    return 0;
}