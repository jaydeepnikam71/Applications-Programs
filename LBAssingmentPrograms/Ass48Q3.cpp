// 3. Write a recursive program which display below pattern.
//5 4 3 2 1   // 5

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = iNo;
    if(iCnt >=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
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