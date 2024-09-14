// Write a program which accept number from user and return the multiplication of all digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit=0;
    int iAns=1;
    
    while(iNo !=0)
    {
        if(iDigit=iNo%10)
        {
            iAns=iAns*iDigit;
        }
        iNo=iNo/10;
    }
    return iAns;
}

int main()
{   
    int iValue = 0;
    int iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}
