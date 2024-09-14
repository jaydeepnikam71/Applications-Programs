//4.Accept number from user and display below pattern. # 1 * # 2 *......

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t %d\t *\t",iCnt);
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