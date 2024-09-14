//4. Write a program which accept matrix from user and check wheather matrix is identity or not.

import java.util.*;

class Ass47Q4
{
    public static void main(String Arg[])
    {
        int iRow = 0;   
        int iCol = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the elements : ");

        int iCnt = 0;
        int jCnt = 0;

        for(iCnt=0;iCnt<iRow;iCnt++)
        {
            for(jCnt=0;jCnt<iCol;jCnt++)
            {
                Arr[iCnt][jCnt] = sobj.nextInt();
            }
        }

        Matrix mobj = new Matrix();

        bRet=mobj.ChkIdentity(Arr);
        if(bRet==true)
        {
            System.out.println("Matrix is Identitty");
        }
        else
        {
            System.out.println("Matrix is NOT Identitty");            
        }

        sobj.close();
    }
}

class Matrix
{
    public boolean ChkIdentity(int Arr[][])
    {
        int iCnt = 0;
        int jCnt = 0;
        boolean bFlag = false;
        int iCount1=0;
        int iCount2=0;

        System.out.println("Entered elements are : ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            for(jCnt=0;jCnt<Arr[iCnt].length;jCnt++)
            {
                System.out.print(Arr[iCnt][jCnt] + "\t");
            }
            System.out.println();
        }
        
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            for(jCnt=0;jCnt < Arr[iCnt].length;jCnt++)
            {
                if (iCnt == jCnt && Arr[iCnt][jCnt] != 1) 
                {
                    return false;
                } 
                else if (iCnt != jCnt && Arr[iCnt][jCnt] != 0) 
                {
                    return false;
                }
            }
        }
        return true;
    }
}