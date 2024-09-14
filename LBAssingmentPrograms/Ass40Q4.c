//4. Write a program which accept one number,two positions from user and check wheather bit at first or bit at second position is ON or OFF.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkBit(int iValue,int iPos1, int iPos2)
{
    int iMask1=0X00000001;
    int iMask2=0X00000001;
    
    int iResult1 =0;
    int iResult2 =0;

    iMask1=iMask2 << (iPos1 - 1);
    iMask2=iMask2 << (iPos2 - 1);

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
    int iPos1=0;
    int iPos2=0;
    bool bRet=false;

    printf("Enter the Number : ");
    scanf("%d",&No);

    printf("Enter Position 1 : ");
    scanf("%d",&iPos1);

    printf("Enter Position 2 : ");
    scanf("%d",&iPos2);

    bRet=ChkBit(No,iPos1,iPos2);

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