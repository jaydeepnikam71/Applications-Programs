//3. Write a program which accept one number from user and check wheather 9th or 12th bit is on or off.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkBit(int iValue)
{
    int iMask1=0X00000100;
    int iMask2=0X00000800;
    int iResult1 =0;
    int iResult2 =0;

    iResult1 = (iValue & iMask1);
    iResult2 = (iValue & iMask2);

    if((iResult1==iMask1) || (iResult2==iMask2))
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
    int No=0;
    bool bRet=false;

    printf("Enter the Number : ");
    scanf("%d",&No);

    bRet=ChkBit(No);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;

}