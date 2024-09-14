// 4. Write a program which accept string from user and check wheather it contains vowels in it or not.

import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int iCnt=0;
        int iCount=0;

        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]=='A' || Arr[iCnt]=='E' || Arr[iCnt]=='I' || Arr[iCnt]=='O' || Arr[iCnt]=='U' || Arr[iCnt]=='a' || Arr[iCnt]=='e' || Arr[iCnt]=='i' || Arr[iCnt]=='o' || Arr[iCnt]=='u')
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

class Ass32Q4
{
    public static void main(String args[])
    {
        boolean bRet=false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        bRet=dobj.ChkVowel(Str);

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