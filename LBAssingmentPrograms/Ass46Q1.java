//1. Write a program which accept matrix from user and return addition of diagonal elements.

import java.util.*;

class Ass46Q1
{
    public static void main(String Arg[])
    {
        int iRow = 0;
        int iCol = 0;
        int iRet = 0;

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
        iRet = mobj.AddDiagonal(Arr);

        System.out.println("Addition of Digonal elements is: "+iRet);

        sobj.close();
    }
}

class Matrix
{
    int AddDiagonal(int Arr[][])
    {
        int iCnt = 0;
        int jCnt = 0;
        int iSum = 0;

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
            for(jCnt=0;jCnt<Arr[iCnt].length;jCnt++)
            {
                if(Arr[iCnt] == Arr[jCnt])
                {
                    iSum = iSum + Arr[iCnt][jCnt];
                }
            }
        }
        return iSum;
    }
}