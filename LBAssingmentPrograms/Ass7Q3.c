// 3.Write a program to find factorial of given number.

#include<stdio.h>

int  Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int  iCnt=0;
    int  iNo2=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iNo2=iNo2*iCnt;
    }

    return iNo2;
}

int main()
{
    int iValue =0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

     iRet=Factorial(iValue);

     printf("Factorial of number is : %d",iRet);

    return 0;
}