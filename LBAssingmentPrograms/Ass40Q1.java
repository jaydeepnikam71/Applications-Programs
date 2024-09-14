//1.Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

import java.util.*;

class Ass40Q1
{
    public static int CountOne(int iNo)
    {
        int iCount=0;
        int iMask=0X00000001;

        while(iNo !=0)
        {
            if((iNo & iMask)==1)
            {
                iCount++;
            }
            iNo=iNo>>1;
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        int iValue=0;
        int iRet=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        iRet=CountOne(iValue);

        System.out.printf("Total ON bits are : "+iRet);
    }
}

