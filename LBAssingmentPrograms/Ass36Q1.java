//1. Write a java program which accepts 2 strings from user and concat N characters of second string after first string. Value of N is user.

import java.util.*;

class Ass36Q1
{
    public static void main(String Arg[])
    {
        String Str1 = null;
        String Str2 = null;
        int iNo=0;
        Scanner sobj = new Scanner(System.in);
        StringDemo dobj = new StringDemo();

        System.out.println("Enter the  String 1 :");
        Str1=sobj.nextLine();

        System.out.println("Enter the  String 2 :");
        Str2=sobj.nextLine();

        System.out.println("Enter the number :");
        iNo=sobj.nextInt();

        dobj.StrNCatX(Str1,Str2,iNo);

        sobj.close();
    }
}

class StringDemo
{
    public void StrNCatX(String src,String dest,int iValue)
    {
        int iCnt=0;

        char Arr[] = dest.toCharArray();

        if(dest.length() <= iValue)
        {
            System.out.println(src+" "+dest);
        }
        else
        {   src=src+" ";
            for(iCnt=0;iCnt<iValue;iCnt++)
            {
                src = src + Arr[iCnt];
            }
            System.out.println(src);
        }
    }
}