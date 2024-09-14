//5. Write a java program which accept N numbers from user and Display all such elements which are multiples of 11.

import java.util.*;

class ArrayDemo
{
    public void Display(int Brr[])
    {
        int iCnt=0;

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            if((Brr[iCnt] % 11)==0)
            {
                System.out.print(Brr[iCnt] + "\t");
            }
        }
        System.out.println();
    }
}

class Ass33Q5
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