//5. Write a program which accept matrix and swap the contents  of consecutive rows.

import java.util.*;

class Ass46Q5
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
        mobj.SwapRows(Arr);

        sobj.close();
    }
}

class Matrix
{
    public void SwapRows(int Arr[][])
    {
        int iCnt = 0;
        int jCnt = 0;
        int iSum = 0;
        int iNo=0;
        int temp =0;

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
                if(iCnt==iNo)
                {
                    temp = Arr[iCnt][jCnt];
                    Arr[iCnt][jCnt]=Arr[iCnt+1][jCnt];
                    Arr[iCnt+1][jCnt]= temp;
                }
            }
            iNo=+2;
        }

        System.out.println("Updated array are : ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            for(jCnt=0;jCnt<Arr[iCnt].length;jCnt++)
            {
                System.out.print(Arr[iCnt][jCnt] + "\t");
            }
            System.out.println();
        }
        
    }
}