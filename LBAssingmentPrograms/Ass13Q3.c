//3. Accept N numbers from user and display all such elements which are even and dividsible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            if((Arr[iCnt] % 5)==0)
            {
                printf("%d\t",Arr[iCnt]);
            }
        }
    }
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

    Display(p,iSize);

    free(p);

    return 0;
}