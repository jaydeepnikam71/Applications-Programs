//5. Write a java program which accept N numbers from user and return product of all odd elements.

import java.util.*;

class Number
{
    public int Product(int Brr[])
    { 
        int iCnt=0;
        int iAns=1;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if((Brr[iCnt] % 2 )!=0)
            {
                iAns = iAns * Brr[iCnt];
            }
        }
        return iAns;
    }
}

class Ass35Q5
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

        Number nobj = new Number();

        iRet=nobj.Product(Arr);

        System.out.println(iRet);

        sobj.close();
    }
}