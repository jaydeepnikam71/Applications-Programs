// 2. Accept amount in US dolllar and its corresponding value in Indian currency.
// Consider 1$ as 70 rupees.

#include<stdio.h>
# define $ 70

int DollarToINR(int iNo1)
{
    
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }

    int iNo2=0;
    iNo2=iNo1*$;

    return iNo2;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}