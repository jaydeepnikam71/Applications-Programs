//5. Write a java program which accept numbers from user and return difference between summation of even and odd digits.

import java.util.*;

class Digit
{
    public int CountDiff(int iValue)
    {
        int iDigit=0;
        int iAns1=0;
        int iAns2=0;

        while(iValue !=0)
        {
            iDigit = iValue % 10;
            if((iDigit % 2)==0)
            {
                iAns1 = iAns1 + iDigit;
            }
            else if((iDigit % 2) !=0)
            {
                iAns2 = iAns2 + iDigit;
            }
            iValue=iValue / 10;
        }
        return (iAns1 - iAns2);
    }
}

class Ass34Q5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo=0;
        int iRet=0;
        
        System.out.println("Enter the Number: ");
        iNo=sobj.nextInt();

        Digit dobj = new Digit();

        iRet=dobj.CountDiff(iNo);

        System.out.println(iRet + "\t");

        sobj.close();
    }
}