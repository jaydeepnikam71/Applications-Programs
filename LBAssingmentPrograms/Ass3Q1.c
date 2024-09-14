// 1.Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int icnt=0;

    for(icnt=1;icnt<=(iNo*2);icnt++)
    {
        if((icnt % 2)==0)
        {
            printf("%d\n",icnt); 
        } 
    }
}
int main()
{
    int iValue;

    printf("Enter number :");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}