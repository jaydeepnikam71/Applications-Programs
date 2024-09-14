// 4.Write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=1;iCnt<=10;iCnt++)
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

    Table(iValue);

    return 0;
}