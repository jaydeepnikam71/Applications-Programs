// 2. Write a recursive program which display below pattern.
//1 2 3 4 5   // 5

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;
    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
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