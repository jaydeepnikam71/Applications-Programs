//4. Write a java program which accept nnumbers from user and return multiplication of all digits.

import java.util.*;

class Digit
{
    public int Multiply(int iValue)
    {
        int iDigit=0;
        int iAns=1;

        while(iValue !=0)
        {
            iDigit = iValue % 10;
            iAns = iAns * iDigit;
            iValue=iValue / 10;
        }
        return iAns;
    }
}

class Ass34Q4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo=0;
        int iRet=0;
        
        System.out.println("Enter the Number : ");
        iNo=sobj.nextInt();

        Digit dobj = new Digit();

        iRet=dobj.Multiply(iNo);

        System.out.println(iRet + "\t");

        sobj.close();
    }
}