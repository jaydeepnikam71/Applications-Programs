// 4. Write a program which accept range from user and return sum of all even numbers in between that range. (Range should contains positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt=0;
    int iAns=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iAns=iAns+iCnt;
        }
    }
   return iAns;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    printf("Addition is : %d",iRet);
    
    return 0;
}
