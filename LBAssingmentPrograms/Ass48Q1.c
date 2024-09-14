// 1. Write a recursive program which display below pattern.
//* * * * *   // 5

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 0;
    if(iCnt <iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue =0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}