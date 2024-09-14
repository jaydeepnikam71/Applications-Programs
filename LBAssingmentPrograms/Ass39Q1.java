//1.Write a program which accept one number and one position from user and chech wheather bit at that position is on or off. If bit is one return true otherwise return false.

import java.util.*;

class Ass39Q1
{
    public static boolean ChkBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask= iMask << (iPos - 1);

        iResult = (iNo & iMask);

        if(iResult == iMask)
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
        int iPos=0;
        boolean bRet=false;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos=sobj.nextInt();

        bRet=ChkBit(iValue,iPos);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}