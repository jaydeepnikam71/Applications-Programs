// 5. Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo1)
{
    
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }

    int iCnt=0;
    int iNo2=1;
    int iNo3=1;

    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iNo2=iNo2*iCnt;
        }
    }

    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        if((iCnt % 2)>=1)
        {
            iNo3=iNo3*iCnt;
        }
    }
    return iNo2-iNo3;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}
  