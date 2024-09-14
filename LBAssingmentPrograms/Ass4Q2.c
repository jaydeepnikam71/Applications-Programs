// 2.Write a program which accept one number from user and display its factors in decreasing order.

#include<stdio.h>

void FactRev(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=0;
    for(i=1;i<iNo;i++)
    {
        if((iNo % i)==0)
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

    FactRev(iValue);

    return 0;

}