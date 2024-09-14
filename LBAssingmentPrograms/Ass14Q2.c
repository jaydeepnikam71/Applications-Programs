//2. Accept N numbers from user and return difference between frequency of even numbers and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount1=0, iCount2=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iCount1++;
        }
        if((Arr[iCnt] % 2)!=0)
        {
            iCount2++;
        }
    }
    return iCount1-iCount2;
}

int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;
    

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

    iRet=Frequency(p,iSize);
    printf("Result is : %d",iRet);

    free(p);

    return 0;
}