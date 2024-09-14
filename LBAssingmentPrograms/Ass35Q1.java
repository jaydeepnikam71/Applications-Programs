//1. Write a java program which accept N numbers from user and accept one another number as NO, check wheather NO is present or not.

import java.util.*;

class Number
{
    public boolean Check(int Brr[],int iNo)
    {
        int iCnt=0;
        int iCount=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iNo)
            {
               iCount++;
            }
        }
        
        if(iCount>=1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Ass35Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        boolean bRet=false;
        int iSize=0;
        int iValue=0;

        System.out.println("Enter the No. of elements : ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements : ");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();

        Number nobj = new Number();

        bRet=nobj.Check(Arr,iValue);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}