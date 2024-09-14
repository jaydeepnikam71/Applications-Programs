//5. Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt=0;
    int iAns=1;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)!=0)
        {
            iAns=iAns*Arr[iCnt];
        }
    }
    
    return iAns;
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

    iRet=Product(p,iSize);
    printf("Product  is %d",iRet);
    
    free(p);

    return 0;
}