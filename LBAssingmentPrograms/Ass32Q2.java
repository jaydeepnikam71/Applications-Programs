// 2. Write a program which accept string from user and count number of small characters.

import java.util.*;

class Ass32Q2
{
    public static int CountSmall(String str)
    {
        int iCount=0;
        int iCnt=0;

        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
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

        iRet=CountSmall(Str);

        System.out.println("Small characters are : "+iRet);
    }
}