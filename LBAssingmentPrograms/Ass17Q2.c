//2.Accept number from user and display below pattern. 5 # 4 #....

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t #\t",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}