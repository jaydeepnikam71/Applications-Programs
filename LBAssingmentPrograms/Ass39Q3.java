//3.Write a program which accept one number and one position from user and ON that bit.Return modified number.

import java.util.*;

class Ass39Q3
{
    public static int OnBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask= iMask << (iPos - 1);

        iResult = (iNo & iMask);

        if(iResult != iMask)
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
        int iPos=0;
        
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos=sobj.nextInt();

        iRet=OnBit(iValue,iPos);

        System.out.printf("Modified Number is : "+iRet);
    }
}