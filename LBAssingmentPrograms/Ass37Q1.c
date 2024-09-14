// 1.Write a program which checks wheather 15th bit is ON or OFF.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    int iMask=16384;
    int iResult=0;

    iResult= iNo & iMask;

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
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;
}
 

/*
import java.util.*;

class Ass37Q1
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=16384;
        int iResult=0;

        iResult= iNo &  iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        int iValue=0;
        boolean bRet=false;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        bRet=ChkBit(iValue);

        if(bRet==true)
        {
            System.out.println("15th Bit is ON ");
        }
        else
        {
             System.out.println("15th Bit is OFF ");
        }

    }
}

*/