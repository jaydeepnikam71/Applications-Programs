//4.Write a program which accept one number and one position from user and toggle that bit.Return modified number.

import java.util.*;

class Ass39Q4
{
    public static int ToogleBit(int iNo,int iPos)
    {
        int iMask=0X00000001;
        int iResult=0;

        iMask= iMask << (iPos - 1);
        
        return (iNo ^ iMask);
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

        iRet=ToogleBit(iValue,iPos);

        System.out.printf("Modified Number is : "+iRet);
    }
}