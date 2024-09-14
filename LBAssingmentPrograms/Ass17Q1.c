//1.Accept number from user and display below pattern. A B C .....

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    char ch='A';

    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}

int main()
{
    int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}