//4.Write A recursive program which accept number from user and return its factorial.

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact =1;

    if(iNo>0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("%d",iRet);

    return 0;
}