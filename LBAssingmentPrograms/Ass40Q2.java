//2.Write a program which accept two number from user and display position of common ON bits from that two numbers.

import java.util.*;

class Ass40Q2
{
    public static void CommonBits(int iNo1,int iNo2)
    {
        int iResult = iNo1 & iNo2;

        int iMask = 0X00000001;
        int iPos = 1;
        System.out.println("Common on bits are : ");

        while(iResult!=0)
        {
            if((iMask & iResult)== 1)
            {
                System.out.print(iPos +" ");
            }
            iResult = iResult>>1;
            iPos++;
        }
    }

    public static void main(String arg[])
    {
        int iValue1=0;
        int iValue2=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Number 1 : ");
        iValue1=sobj.nextInt();

        System.out.println("Enter Number 2 : ");
        iValue2=sobj.nextInt();

        CommonBits(iValue1,iValue2);

    }
}
