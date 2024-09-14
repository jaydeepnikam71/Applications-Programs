//5. Write a program which accept one number,range of positions from user. Toggle all bits from that range.

#include<stdio.h>
#include<stdlib.h>

int ToggleBitRange(int iValue,int iStart, int iEnd)
{
    int iCnt=0;
    int iResult = 0;
    int iMask = 0X00000001;

    iMask = ((1 << (iEnd - iStart + 1)) - 1) << iStart;

    iResult = iMask ^ iValue;

    return iResult;

}

int main()
{
    int No=0;
    int iStart=0;
    int iEnd=0;
    int iRet=0;

    printf("Enter the Number : ");
    scanf("%d",&No);

    printf("Enter Start Position  : ");
    scanf("%d",&iStart);

    printf("Enter End Position : ");
    scanf("%d",&iEnd);

    iRet=ToggleBitRange(No,iStart,iEnd);

    printf("Modified Number is : %d",iRet);

    return 0;

}