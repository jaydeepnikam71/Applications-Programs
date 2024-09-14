//3.Write a program which accept one number from user and toggle 7th bit of that number.Return modified number.

import java.util.*;

class Ass38Q3
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X00000040;
    
        return (iNo ^ iMask);

    }

    public static void main(String arg[])
    {
        int iValue=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        iRet=ToggleBit(iValue);

        System.out.printf("Modified Number is : "+iRet);

    }
}