//5.Write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.

import java.util.*;

class Ass39Q5
{
    public static int ToogleBit(int iNo)
    {
        int iMask=0XF000000F;

        return (iNo ^ iMask);
    }

    public static void main(String arg[])
    {
        int iValue=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        iRet=ToogleBit(iValue);

        System.out.printf("Modified Number is : "+iRet);
    }
}