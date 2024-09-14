// 5.Write a program which accept N number from user and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
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

    MultipleDisplay(iValue);

    return 0;
}