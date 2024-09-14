//2. Write a java program which accepts 2 strings from user and check strings are equal or not.

import java.util.*;

class Ass36Q2
{
    public static void main(String Arg[])
    {
        String Str1 = null;
        String Str2 = null;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);
        StringDemo dobj = new StringDemo();

        System.out.println("Enter the  String 1 :");
        Str1=sobj.nextLine();

        System.out.println("Enter the  String 2 :");
        Str2=sobj.nextLine();

        bRet = dobj.StrCmpX(Str1,Str2);
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
    public boolean StrCmpX(String src,String dest)
    {
        int iCnt=0;

        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        if(Arr.length == Brr.length)
        {
            for(iCnt=0;iCnt<Arr.length;iCnt++)
            {
                if(Arr[iCnt] == Brr[iCnt])
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return false;
    }
}