//1. Write a java program which accept numbers from user and return the count of even digits.

import java.util.*;

class Digit
{
    public int CountEven(int iValue)
    {
        int iDigit=0;
        int iCount=0;

        while(iValue !=0)
        {
            iDigit = iValue % 10;
            if((iDigit % 2)==0)
            {
                iCount++;
            }
            iValue=iValue / 10;
        }
        return iCount;
    }
}

class Ass34Q1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo=0;
        int iRet=0;
        
        System.out.println("Enter the Number: ");
        iNo=sobj.nextInt();

        Digit dobj = new Digit();

        iRet=dobj.CountEven(iNo);

        System.out.println(iRet + "\t");

        sobj.close();
    }
}