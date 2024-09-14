//1. Write a java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

import java.util.*;

class ArrayDemo
{
    public int Difference(int Brr[])
    {
        int iCnt=0;
        int iNo1=0;
        int iNo2=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if((Brr[iCnt] % 2)==0)
            {
                iNo1=iNo1+Brr[iCnt];
            }
            else if((Brr[iCnt] % 2)!=0)
            {
                iNo2=iNo2+Brr[iCnt];
            }
        }
        return (iNo1 - iNo2);
    }
}

class Ass33Q1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        int iRet=0;
        int iSize=0;

        System.out.println("Enter the No. of elements : ");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements : ");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        ArrayDemo dobj = new ArrayDemo();

        iRet=dobj.Difference(Arr);

        System.out.println("Difference is : "+iRet);

        sobj.close();
    }
}