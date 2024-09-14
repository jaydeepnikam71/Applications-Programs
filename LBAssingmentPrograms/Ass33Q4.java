//4. Write a java program which accept N numbers from user and Display all such elements which are divisible by 3 & 5.

import java.util.*;

class ArrayDemo
{
    public void Display(int Brr[])
    {
        int iCnt=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if(((Brr[iCnt] % 3)==0) && ((Brr[iCnt] % 5)==0))
            {
                System.out.print(Brr[iCnt] + "\t");
            }
        }
        System.out.println();
    }
}

class Ass33Q4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize=0;
        int iCnt=0;
        
        System.out.println("Enter the no. of elements : ");
        iSize=sobj.nextInt();

        System.out.println("Enter elements : ");

        int Arr[] = new int[iSize];

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
        System.out.println();
        
        ArrayDemo dobj = new ArrayDemo();

        dobj.Display(Arr);

        sobj.close();
    }
}