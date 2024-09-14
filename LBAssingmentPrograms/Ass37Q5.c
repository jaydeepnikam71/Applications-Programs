// 5.Write a program which checks wheather 1st & 32(last) is ON or OFF.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    int iMask=0X80000001;
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
        printf("First & last bit is ON");
    }
    else
    {
        printf("First & last bit is OFF");
    }
    return 0;
}
