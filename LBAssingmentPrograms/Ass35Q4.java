//4. Write a java program which accept N numbers from user and accept Range ,Display all elements from that range.

import java.util.*;

class Number
{
    public void Range(int Brr[],int iStart,int iEnd)
    { 
        int iCnt=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(Brr[iCnt]>=iStart && Brr[iCnt]<=iEnd)
            {
                System.out.print(Brr[iCnt] + "\t");
            }
        }
    }
}

class Ass35Q4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
        int iSize=0;
        int iValue1=0;
        int iValue2=0;

        System.out.println("Enter the No. of elements : ");
        iSize=sobj.nextInt();

        System.out.println("Enter the Start position : ");
        iValue1=sobj.nextInt();

        System.out.println("Enter the End position : ");
        iValue2=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements : ");

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        Number nobj = new Number();

        nobj.Range(Arr,iValue1,iValue2);

        sobj.close();
    }
}