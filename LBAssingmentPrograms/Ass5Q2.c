// 2. Write a program which accept one number from user and check wheather that number is greater thsn 100 or not.

#include<stdio.h>
typedef int bool;

#define TRUE  1
#define FALSE 0

bool ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue =0;
    bool bRet;
    printf("Please enter number : ");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);

    if(bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
        return 0;
}   