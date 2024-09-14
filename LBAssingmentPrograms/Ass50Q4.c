//4.Write A recursive program which accept number from user and return smallest digit.

#include<stdio.h>

int Min(int iNo)
{
    int iDigit =0;
    static int iMin=9;

    if(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo=iNo/10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d",iRet);

    return 0;
}