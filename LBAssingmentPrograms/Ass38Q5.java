//5.Write a program which accept one number from user and on its first 4 bits of that number. Return modified number.

import java.util.*;

class Ass38Q5
{
    public static int OnBit(int iNo)
    {
        int iMask=0X0000000F;
      
        return (iNo | iMask);
    }

    public static void main(String arg[])
    {
        int iValue=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        iRet=OnBit(iValue);

        System.out.printf("Modified Number is : "+iRet);

    }
}