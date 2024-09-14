// Write a program which accept number from user and count frequency of such a digits which are less than 6.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0;
    int count=0;
    
    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            count++;
        }
        iNo=iNo/10;
    }
    return count;
}

int main()
{   
    int iValue = 0;
    int iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("%d",iRet);

    return 0;
}
