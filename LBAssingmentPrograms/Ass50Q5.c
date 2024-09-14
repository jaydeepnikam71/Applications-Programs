//5.Write A recursive program which accept number from user and return its reverse number.

#include<stdio.h>

void Reverse(int iNo)
{
    int iDigit =0;

    if(iNo!=0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo=iNo/10;
        Reverse(iNo);
    }
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Reverse(iValue);

    return 0;
}