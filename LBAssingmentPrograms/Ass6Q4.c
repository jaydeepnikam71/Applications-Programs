// 4.Write a program which accept N number from user and print all odd numbers up to N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2)>=1)
        {
            printf("%d\n",iCnt);
        }
        
    }
}

int main()
{
    int iValue =0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}