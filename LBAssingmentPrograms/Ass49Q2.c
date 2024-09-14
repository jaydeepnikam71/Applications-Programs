//2.Write A recursive program which accept number from user and summation of its digits.

#include<stdio.h>

int Summation(int iNo)
{
    int iDigit =0;
    static int iSum=0;

    if(iNo!=0)
    {
        iDigit = iNo % 10;
        iSum = iSum +iDigit;
        iNo=iNo/10;
        Summation(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("%d",iRet);

    return 0;
}