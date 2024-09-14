//1.Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

import java.util.*;

class Ass38Q1
{
    public static int OffBit(int iNo)
    {
        int iMask=0X00000040;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }

    public static void main(String arg[])
    {
        int iValue=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        iRet=OffBit(iValue);

        System.out.printf("Modified Number is : "+iRet);

    }
}
