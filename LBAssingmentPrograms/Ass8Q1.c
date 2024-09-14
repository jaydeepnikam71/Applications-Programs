// 1.Write a program which accept number from user and display below pattern.

#include<stdio.h>

void Display(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    int jCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
          printf(" * ",iCnt);
    }
    for(jCnt=1;jCnt<=iNo;jCnt++)
    {
          printf(" # ",iCnt);
    }
}


int main()
{
    int iValue =0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}