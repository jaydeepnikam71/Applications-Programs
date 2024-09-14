// 3.Write a program which accept one number from user and print even factors of that number.

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(((i%2)==0) && ((iNo%i)==0))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}