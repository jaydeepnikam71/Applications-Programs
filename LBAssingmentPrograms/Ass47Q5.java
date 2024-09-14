//5. Write a program which accept matrix from user and check wheather matrix is sparse matrix or not.
//Sparse matrix is a matrix with the majority of its elements equal to zero.

import java.util.*;

class Ass47Q5
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

        bRet=mobj.ChkSparse(Arr);
        if(bRet==true)
        {
            System.out.println("Matrix is Sparse");
        }
        else
        {
            System.out.println("Matrix is NOT Sparse");            
        }

        sobj.close();
    }
}

class Matrix
{
    public boolean ChkSparse(int Arr[][])
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
                if(Arr[iCnt][jCnt]==0)
                {
                    iCount1++;
                }
                else
                {
                    iCount2++;
                }
            }
        }

        if(iCount1>iCount2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}