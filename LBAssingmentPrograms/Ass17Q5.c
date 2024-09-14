//2.Accept number from user and display below pattern. 2 4 6 8 10.....

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<=(iNo*2);iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
        }
        
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