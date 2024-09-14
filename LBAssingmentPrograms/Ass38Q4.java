//4.Write a program which accept one number from user and toggle 7th & 10th bit of that number. Return modified number.

import java.util.*;

class Ass38Q4
{
    public static int ToggleBit(int iNo)
    {
        int iMask=0X00000240;
        
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