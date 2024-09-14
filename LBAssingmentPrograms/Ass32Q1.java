// 1. Write a program which accept string from user and count number of capital characters.

import java.util.*;

class Ass32Q1
{
    public static int CountCapital(String str)
    {
        int iCount=0;
        int iCnt=0;

        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                iCount++;
            }
        }
    return iCount;
    }

    public static void main(String args[])
    {
        int iRet=0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Str = sobj.nextLine();

        iRet=CountCapital(Str);

        System.out.println("Capital characters are : "+iRet);
    }
}