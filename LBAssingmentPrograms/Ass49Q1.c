//1.Write A recursive program which accept number from user and display below pattern.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <=5 && iNo > 0)
    {
        printf("%d\t*\t",iNo);
        iNo--;
        Display(iNo);    
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}