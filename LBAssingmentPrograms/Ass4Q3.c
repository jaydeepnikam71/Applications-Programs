// 3. Write a program which accept number from user and display all its non factors.

#include<stdio.h>

void NonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=0;
    for(i=1;i<iNo;i++)
    {
        if((iNo % i)>=1)
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

    NonFact(iValue);

    return 0;

}