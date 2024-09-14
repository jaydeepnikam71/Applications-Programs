// 5.Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void TableRev(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        int iAns=0;
        iAns=iNo * iCnt;
        printf("%d\n",iAns);
       
    }
}

int main()
{
    int iValue =0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}