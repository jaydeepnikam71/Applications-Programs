//2. Write a java program which accept N numbers from user and accept one another number as NO, return index of first occurence of that NO.

import java.util.*;

class Number
{
    public int FirstOcc(int Brr[],int iNo)
    { 
        int iCnt=0;
        int iCount=0;
        int iAns=0;
        int temp=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]==iNo)
            {
                iCount++;
                break;
            }
        }
        if(iCount==1)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
}

class Ass35Q2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        int iRet=0;
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

        iRet=nobj.FirstOcc(Arr,iValue);

        if(iRet==-1)
        {
            System.out.println("There is no such element");
        }
        else
        {
            System.out.println("First Occurence is : "+iRet);
        }
        sobj.close();
    }
}