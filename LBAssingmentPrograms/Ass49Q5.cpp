//5.Write A recursive program which accept number from user and return its product of digits.

#include<stdio.h>

int Multi(int iNo)
{
    int iDigit =0;
    static int iMulti=1;

    if(iNo!=0)
    {
        iDigit = iNo % 10;
        iMulti =iMulti * iDigit;
        iNo=iNo/10;
        Multi(iNo);
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Multi(iValue);
    printf("%d",iRet);

    return 0;
}