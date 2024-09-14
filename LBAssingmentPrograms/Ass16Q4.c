//4. Accept N numbers from user and display all such numbers which contains 3 digits in it.
                          
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] >=100 && Arr[iCnt]<=999)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Digits(p,iSize);

    free(p);

    return 0;
}