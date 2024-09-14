// 4.Write a program which checks wheather 7th,8th & 9th bit is ON or OFF.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    int iMask=0X000001C0;
    int iResult=0;

    iResult = iNo & iMask;

    if(iResult==iMask)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRet=false;

    printf("Enter Number : ");
    scanf("%d",&iNo);

    bRet=ChkBit(iNo);

    if(bRet==true)
    {
        printf("7th,8th & 9th bit is ON");
    }
    else
    {
        printf("7th,8th & 9th bit is OFF");
    }
    return 0;
}
