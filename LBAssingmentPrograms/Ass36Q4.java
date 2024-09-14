//4. Accept string from user and reverse and contents of that string by toggling the case.

import java.util.*;

class Ass36Q4
{
    public static void main(String Arg[])
    {
        String Str = null;
        String iRet = null;

        Scanner sobj = new Scanner(System.in);
        StringDemo dobj = new StringDemo();

        System.out.println("Enter the  String :");
        Str=sobj.nextLine();

        iRet = dobj.StrRevTog(Str);
        System.out.println(iRet);

        sobj.close();
    }
}

class StringDemo
{
    public String StrRevTog(String str)
    {
        int iCnt=0;
        String iAns = "";

        char Arr[] = str.toCharArray();

        for(iCnt=Arr.length-1;iCnt>=0;iCnt--)
        {
            if(Arr[iCnt]>='A' && Arr[iCnt]<='Z')
            {
                Arr[iCnt] += 32;
            }
            else if(Arr[iCnt]>='a' && Arr[iCnt]<='z')
            {
                Arr[iCnt] -= 32;
            }
            iAns = iAns + Arr[iCnt];
        }
        return iAns;
    }
}