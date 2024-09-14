// 3. Write a program which accept string from user and return difference between frequency of small char and capital char.

import java.util.*;

class Ass32Q3
{
    public static int CountDiff(String str)
    {
        int iCount1=0 ,iCount2= 0;
        int iCnt=0;

        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
            {
                iCount1++;
            }
            else if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                iCount2++;
            }
        }
    return (iCount1 - iCount2);
    }

    public static void main(String args[])
    {
        int iRet=0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Str = sobj.nextLine();

        iRet=CountDiff(Str);

        System.out.println("Difference is : "+iRet);
    }
}