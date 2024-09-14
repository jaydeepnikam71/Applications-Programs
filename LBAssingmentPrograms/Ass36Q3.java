//3. Write a java program which accepts 2 strings from user and check wheather first N contents of two strings are equal or not. 

import java.util.*;

class Ass36Q3
{
    public static void main(String Arg[])
    {
        String Str1 = null;
        String Str2 = null;
        int iNo=0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);
        StringDemo dobj = new StringDemo();

        System.out.println("Enter the  String 1 :");
        Str1=sobj.nextLine();

        System.out.println("Enter the  String 2 :");
        Str2=sobj.nextLine();

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        bRet = dobj.StrNCmpX(Str1,Str2,iNo);
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

class StringDemo
{
    public boolean StrNCmpX(String src,String dest,int iValue)
    {
        int iCnt=0;

        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        for(iCnt=0;iCnt<iValue;iCnt++)
        {
            if(Arr[iCnt] == Brr[iCnt])
            {
                return true;
            }
        }
        return false;
    }
}