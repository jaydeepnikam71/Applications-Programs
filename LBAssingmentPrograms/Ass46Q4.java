//4. Write a program which accept matrix and display adddition of elements from each column.

import java.util.*;

class Ass46Q4
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
        mobj.AddColumn(Arr);

        sobj.close();
    }
}

class Matrix
{
    public void AddColumn(int Arr[][])
    {
        int iCnt = 0;
        int jCnt = 0;
        int iSum = 0;
        int iNo=0;

        System.out.println("Entered elements are : ");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            for(jCnt=0;jCnt<Arr[iCnt].length;jCnt++)
            {
                System.out.print(Arr[iCnt][jCnt] + "\t");
            }
            System.out.println();
        }
        
        for(jCnt=0;jCnt < Arr.length;jCnt++)
        {
            for(iCnt=0;iCnt<Arr[jCnt].length;iCnt++)
            {
                if(jCnt==iNo)
                {
                   iSum = iSum + Arr[iCnt][jCnt];
                }
                else if(iNo > jCnt)
                {
                    break;
                }
            }
            iNo++;
            System.out.print(iSum + "\t");
            iSum=0;
        }    
    }
}