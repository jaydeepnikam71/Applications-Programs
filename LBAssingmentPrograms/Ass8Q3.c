// 3. Write a program to find even factorial of given number.

#include<stdio.h>

int EvenFactorial(int iNo1)
{
    
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    int iCnt=0;
    int iNo2=1;

    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iNo2=iNo2*iCnt;
        }
    }
    return iNo2;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return 0;
}
  