//1. Write a program which accept matrix from user and display transpose of the matrix.

import java.util.*;

class Ass47Q1
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

        mobj.Transpose(Arr);
    
        sobj.close();
    }
}

class Matrix
{
    void Transpose(int Arr[][])
    {
        int iCnt = 0;
        int jCnt = 0;
        boolean bFlag = false;

        System.out.println("Entered elements are : ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            for(jCnt=0;jCnt<Arr[iCnt].length;jCnt++)
            {
                System.out.print(Arr[iCnt][jCnt] + "\t");
            }
            System.out.println();
        }
        
        System.out.println("Transpose of the matrix is : ");
        for (iCnt = 0; iCnt < Arr[0].length; iCnt++) 
        {
            for (jCnt = 0; jCnt < Arr.length; jCnt++) 
            {
                System.out.print(Arr[jCnt][iCnt] + "\t");
            }
            System.out.println();
        }
    }
}