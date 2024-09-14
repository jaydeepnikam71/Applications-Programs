// 5. Write a program which accept string from user and display it in reverse order.

import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        int iCnt=0;
        int jCnt=0;
        char temp;

        char Arr[]=str.toCharArray();

        for(iCnt=0,jCnt=Arr.length-1;iCnt<=jCnt;iCnt++,jCnt--)
        {
            temp = Arr[iCnt];
            Arr[iCnt] = Arr[jCnt];
            Arr[jCnt] = temp;
        }
        System.out.println(Arr);
    }
}

class Ass32Q5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Str = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        dobj.Reverse(Str);

        sobj.close();
    }
}